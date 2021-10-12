/*
 * Tasks.c
 *
 *  Created on: 8 sep. 2021
 *      Author: uid87544
 */

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"

/* SDK includes. */
#include "sdk_project_config.h"


#include "BasicTypes.h"
#include "Window.h"
#include "Door.h"
#include "Button.h"
#include "DoorApp.h"
#include "WindowApp.h"
#include "Wdg.h"
#include "Mcu.h"
#include "Mpu.h"
#include "Adc.h"
#include "Dio.h"
#include "DcuTasks.h"

/* Local Function Prototypes */
void Tasks_StartOS(void);


/* ============================================================================
 * Function Name:
 * Description:
 * Arguments:
 * Return:
 * ========================================================================= */
void app_task_200ms( void *pvParameters )
{
	TickType_t xNextWakeTime;

	/* Casting pvParameters to void because it is unused */
	(void)pvParameters;

	/* Initialize xNextWakeTime - this only needs to be done once. */
	xNextWakeTime = xTaskGetTickCount();

	for( ;; )
	{

		PINS_DRV_TogglePins(LED_Blue_PORT, (1u << LED_Blue_PIN) | (1u << LED_Red_PIN));

		/* Place this task in the blocked state until it is time to run again.
		The block time is specified in ticks, the constant used converts ticks
		to ms.  While in the Blocked state this task will not consume any CPU
		time. */
		vTaskDelayUntil( &xNextWakeTime, 200 ); //TODAS LAS TASK TIENEN UN DELAY
		//1 TICK ES UN MS

	}
} //PARA GENERAR UNA NUEVA TAREA SOLAMENTE SEGUIMOS EL ESQUELETO DE ESTA FUNCION

void app_task_100ms( void *pvParameters )
{
	TickType_t xNextWakeTime;

	/* Casting pvParameters to void because it is unused */
	(void)pvParameters;

	/* Initialize xNextWakeTime - this only needs to be done once. */
	xNextWakeTime = xTaskGetTickCount();

	for( ;; )
	{
		Adc_Run(); //INVOCACION DE ADC CADA 100ms

		//PARA LA PRACTICA ES HACER QUE ENCIENDA UN LED SI EL ADC SOBREPASA LOS 500 Y SI ES MENOR EL LED SE APAGA
		if(adc_pal_1_results0[0] > 500)
			PINS_DRV_WritePin(LED_Green_PORT,LED_Green_PIN,0); //0 ES ENCEDIDO, 1 ES APAGADO
		else
			PINS_DRV_WritePin(LED_Green_PORT,LED_Green_PIN,1); //0 ES ENCEDIDO, 1 ES APAGADO


		/* Place this task in the blocked state until it is time to run again.
		The block time is specified in ticks, the constant used converts ticks
		to ms.  While in the Blocked state this task will not consume any CPU
		time. */
		vTaskDelayUntil( &xNextWakeTime, 100 ); //TODAS LAS TASK TIENEN UN DELAY
		//1 TICK ES UN MS

	}
}

void app_task_10ms( void *pvParameters )
{
	TickType_t xNextWakeTime;

	/* Casting pvParameters to void because it is unused */
	(void)pvParameters;

	/* Initialize xNextWakeTime - this only needs to be done once. */
	xNextWakeTime = xTaskGetTickCount();

	for( ;; )
	{

		/* Place this task in the blocked state until it is time to run again.
		The block time is specified in ticks, the constant used converts ticks
		to ms.  While in the Blocked state this task will not consume any CPU
		time. */
		vTaskDelayUntil( &xNextWakeTime, 10 ); //TODAS LAS TASK TIENEN UN DELAY
		//1 TICK ES UN MS

	}
}

void Tasks_StartOS(void)
{
	xTaskCreate(app_task_200ms,        "App200ms",         configMINIMAL_STACK_SIZE, NULL,  3, NULL); //SEGUIR CONCEPTOS DE RMS
	xTaskCreate(app_task_100ms,        "App100ms",         configMINIMAL_STACK_SIZE, NULL,  2, NULL);//EN RMS LAS TAREAS MAS RAPIDA TIENEN MAYOR PRIORIDAD
	xTaskCreate(app_task_10ms,        "App10ms",         configMINIMAL_STACK_SIZE, NULL,  3, NULL);//5 ES MAYOR PRIORIDAD, 1 ES MENOR PRIORIDAD

	Mpu_Init();

	vTaskStartScheduler();

}

void init_hook(void) {

    Mcu_Init();

	Wdg_Init();

    Dio_Init();

    Adc_Init();

	Tasks_StartOS();
}
