################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/S32/S32DS/software/S32SDK_S32K1XX_RTM_4.0.2/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_1.c 

OBJS += \
./SDK/rtos/FreeRTOS/Source/portable/MemMang/heap_1.o 

C_DEPS += \
./SDK/rtos/FreeRTOS/Source/portable/MemMang/heap_1.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS/Source/portable/MemMang/heap_1.o: D:/S32/S32DS/software/S32SDK_S32K1XX_RTM_4.0.2/rtos/FreeRTOS_S32K/Source/portable/MemMang/heap_1.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/rtos/FreeRTOS/Source/portable/MemMang/heap_1.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


