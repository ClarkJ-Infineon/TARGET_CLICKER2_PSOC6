/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.1.4663
* mtb-pdl-cat1 2.2.1.9614
* personalities 4.0.0.0
* udd 3.0.0.1125
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_WCO_IN_ENABLED 1U
#define CYBSP_WCO_IN_PORT GPIO_PRT0
#define CYBSP_WCO_IN_PORT_NUM 0U
#define CYBSP_WCO_IN_PIN 0U
#define CYBSP_WCO_IN_NUM 0U
#define CYBSP_WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
	#define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define CYBSP_WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_IN_HAL_PORT_PIN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_IN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CYBSP_WCO_OUT_ENABLED 1U
#define CYBSP_WCO_OUT_PORT GPIO_PRT0
#define CYBSP_WCO_OUT_PORT_NUM 0U
#define CYBSP_WCO_OUT_PIN 1U
#define CYBSP_WCO_OUT_NUM 1U
#define CYBSP_WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
	#define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define CYBSP_WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_OUT_HAL_PORT_PIN P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_OUT P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_RX_P0 (P0_2)
	#define MKBUS1_RX CYBSP_UART_RX_P0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_TX_P0 (P0_3)
	#define MKBUS1_TX CYBSP_UART_TX_P0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_USER_BTN_2 (P0_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define MKBUS1_RST (P0_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SCL_P10 (P10_0)
	#define MKBUS2_SCL CYBSP_I2C_SCL_P10
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SDA_P10 (P10_1)
	#define MKBUS2_SDA CYBSP_I2C_SDA_P10
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P10_2 (P10_2)
	#define _BATT_VSENSE CYBSP_SAR_P10_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P10_3 (P10_3)
	#define MKBUS2_AN CYBSP_SAR_P10_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P10_4 (P10_4)
	#define MKBUS1_AN CYBSP_SAR_P10_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P10_5 (P10_5)
	#define HDR1_A5 CYBSP_SAR_P10_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P10_6 (P10_6)
	#define HDR1_A3 CYBSP_SAR_P10_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MOSI_P11 (P11_0)
	#define MKBUS1_MOSI CYBSP_SPI_MOSI_P11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MISO_P11 (P11_1)
	#define MKBUS1_MISO CYBSP_SPI_MISO_P11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CLK_P11 (P11_2)
	#define MKBUS1_SCK CYBSP_SPI_CLK_P11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CS_P11 (P11_3)
	#define MKBUS1_CS CYBSP_SPI_CS_P11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P11_4 (P11_4)
	#define HDR2_PWM9 CYBSP_PWM_P11_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P11_5 (P11_5)
	#define HDR2_PWM7 CYBSP_PWM_P11_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D12 (P11_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D13 (P11_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define KP_USB_UART_TX (P12_0)
	#define CYBSP_DEBUG_UART_RX KP_USB_UART_TX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define KP_USB_UART_RX (P12_1)
	#define CYBSP_DEBUG_UART_TX KP_USB_UART_RX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_2 (P12_2)
	#define HDR2_PWM4 CYBSP_PWM_P12_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_3 (P12_3)
	#define HDR2_PWM5 CYBSP_PWM_P12_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_4 (P12_4)
	#define HDR2_PWM6 CYBSP_PWM_P12_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_5 (P12_5)
	#define HDR2_PWM8 CYBSP_PWM_P12_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_6 (P12_6)
	#define HDR2_PWM10 CYBSP_PWM_P12_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P12_7 (P12_7)
	#define HDR2_PWM11 CYBSP_PWM_P12_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_RX_P13 (P13_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_TX_P13 (P13_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define MKBUS2_INT (P13_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D16 (P13_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SCL_P1 (P1_0)
	#define MKBUS1_SCL CYBSP_I2C_SCL_P1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SDA_P1 (P1_1)
	#define MKBUS1_SDA CYBSP_I2C_SDA_P1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D17 (P1_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D18 (P1_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D19 (P1_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_USER_BTN_1 (P1_5)
	#define CYBSP_USER_BTN CYBSP_USER_BTN_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D11 (P5_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D12 (P5_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D14 (P5_2)
	#define CYBSP_USER_LED2 HDR2_D14
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define MKBUS2_RST (P5_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D20 (P5_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR2_D15 (P5_5)
	#define CYBSP_USER_LED1 HDR2_D15
	#define CYBSP_USER_LED HDR2_D15
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define BATT_SENSEL (P5_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MOSI_P6 (P6_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MISO_P6 (P6_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CLK_P6 (P6_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CS_P6 (P6_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SCL_P6 (P6_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SDA_P6 (P6_5)
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
	#define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_PORT_PIN P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
	#define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_PORT_PIN P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D13 (P7_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D14 (P7_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D15 (P7_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D16 (P7_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D17 (P7_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D18 (P7_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D19 (P7_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D20 (P7_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MOSI_P8 (P8_0)
	#define MKBUS2_MOSI CYBSP_SPI_MOSI_P8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MISO_P8 (P8_1)
	#define MKBUS2_MISO CYBSP_SPI_MISO_P8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CLK_P8 (P8_2)
	#define MKBUS2_SCK CYBSP_SPI_CLK_P8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CS_P8 (P8_3)
	#define MKBUS2_CS CYBSP_SPI_CS_P8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define BATT_STAT (P8_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define MKBUS1_INT (P8_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P8_6 (P8_6)
	#define MKBUS1_PWM CYBSP_PWM_P8_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_PWM_P8_7 (P8_7)
	#define MKBUS2_PWM CYBSP_PWM_P8_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_RX_P9 (P9_0)
	#define MKBUS2_RX CYBSP_UART_RX_P9
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_UART_TX_P9 (P9_1)
	#define MKBUS2_TX CYBSP_UART_TX_P9
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define HDR1_D10 (P9_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_CTB_P9_3 (P9_3)
	#define HDR1_A9 CYBSP_CTB_P9_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_CTB_P9_4 (P9_4)
	#define HDR1_A7 CYBSP_CTB_P9_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_CTB_P9_5 (P9_5)
	#define HDR1_A8 CYBSP_CTB_P9_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P9_6 (P9_6)
	#define HDR1_A4 CYBSP_SAR_P9_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SAR_P9_7 (P9_7)
	#define HDR1_A6 CYBSP_SAR_P9_7
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_WCO_IN_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_WCO_OUT_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
