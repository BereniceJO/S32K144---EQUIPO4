#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "pins_driver.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*! @brief Definitions/Declarations for BOARD_InitPins Functional Group */
/*! @brief User definition pins */
#define DOOR_UNLOCKED_PORT    PTD
#define DOOR_UNLOCKED_PIN     16U
#define DOOR_LOCKED_PORT    PTD
#define DOOR_LOCKED_PIN     15U
#define ANTIPINCH_SIGNAL_PORT    PTC
#define ANTIPINCH_SIGNAL_PIN     14U
#define OPEN_BTN_PORT    PTC
#define OPEN_BTN_PIN     12U
#define CLOSE_BTN_PORT    PTC
#define CLOSE_BTN_PIN     13U
#define OpenSDA_UART_Rx_PORT    PTC
#define OpenSDA_UART_Rx_PIN     6U
#define OpenSDA_UART_Tx_PORT    PTC
#define OpenSDA_UART_Tx_PIN     7U
#define CAN_Tx_PORT    PTE
#define CAN_Tx_PIN     5U
#define CAN_Rx_PORT    PTE
#define CAN_Rx_PIN     4U
#define LIN_Tx_PORT    PTD
#define LIN_Tx_PIN     7U
#define LIN_Rx_PORT    PTD
#define LIN_Rx_PIN     6U
#define SBC_SCK_PORT    PTB
#define SBC_SCK_PIN     14U
#define SBC_MISO_PORT    PTB
#define SBC_MISO_PIN     15U
#define SBC_MOSI_PORT    PTB
#define SBC_MOSI_PIN     16U
#define SBC_CS_PORT    PTB
#define SBC_CS_PIN     17U
#define PASSENGER_OPEN_BTN_PORT    PTB
#define PASSENGER_OPEN_BTN_PIN     6U
#define PASSENGER_CLOSE_BTN_PORT    PTB
#define PASSENGER_CLOSE_BTN_PIN     7U
#define REARLEFT_OPEN_BTN_PORT    PTE
#define REARLEFT_OPEN_BTN_PIN     0U
#define REARLEFT_CLOSE_BTN_PORT    PTE
#define REARLEFT_CLOSE_BTN_PIN     9U
#define REARRIGHT_OPEN_BTN_PORT    PTC
#define REARRIGHT_OPEN_BTN_PIN     5U
#define REARRIGHT_CLOSE_BTN_PORT    PTC
#define REARRIGHT_CLOSE_BTN_PIN     4U
#define REAR_WINDOW_LOCK_BTN_PORT    PTA
#define REAR_WINDOW_LOCK_BTN_PIN     10U
#define WINDOW_LED1_PORT    PTE
#define WINDOW_LED1_PIN     13U
#define WINDOW_LED3_PORT    PTD
#define WINDOW_LED3_PIN     5U
#define WINDOW_LED2_PORT    PTD
#define WINDOW_LED2_PIN     3U
#define WINDOW_LED4_PORT    PTD
#define WINDOW_LED4_PIN     12U
#define WINDOW_LED5_PORT    PTD
#define WINDOW_LED5_PIN     11U
#define WINDOW_LED6_PORT    PTD
#define WINDOW_LED6_PIN     10U
#define WINDOW_LED7_PORT    PTA
#define WINDOW_LED7_PIN     17U
#define WINDOW_LED8_PORT    PTA
#define WINDOW_LED8_PIN     11U
#define SW_WINDOW_CLOSE_PORT    PTA
#define SW_WINDOW_CLOSE_PIN     8U
#define SW_WINDOW_OPEN_PORT    PTC
#define SW_WINDOW_OPEN_PIN     11U
#define LOCK_BTN_PORT    PTA
#define LOCK_BTN_PIN     9U
#define UNLOCK_BTN_PORT    PTE
#define UNLOCK_BTN_PIN     12U
#define SW_DOOR_LOCKED_PORT    PTD
#define SW_DOOR_LOCKED_PIN     13U
#define SW_DOOR_UNLOCKED_PORT    PTD
#define SW_DOOR_UNLOCKED_PIN     14U
#define HW_VARIANT0_PORT    PTD
#define HW_VARIANT0_PIN     8U
#define HW_VARIANT1_PORT    PTD
#define HW_VARIANT1_PIN     9U
#define HW_VARIANT2_PORT    PTD
#define HW_VARIANT2_PIN     2U
#define LED_Blue_PORT    PTD
#define LED_Blue_PIN     0U
#define WINDOW_LED9_PORT    PTA
#define WINDOW_LED9_PIN     12U
#define WINDOW_LED10_PORT    PTA
#define WINDOW_LED10_PIN     13U
/*! @brief User number of configured pins */
#define NUM_OF_CONFIGURED_PINS0 44
/*! @brief User configuration structure */
extern pin_settings_config_t g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0];


#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

