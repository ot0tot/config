/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU                   STM32F411

#define BOARD_NAME                      FOSSF4ELRS
#define MANUFACTURER_ID                 BEFH

#define USE_ACC
#define USE_FLASH
#define USE_GYRO

#define USE_ACC_SPI_MPU6000
#define USE_FLASH_W25Q128FV
#define USE_GYRO_SPI_MPU6000
#define USE_MAX7456

#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
// #define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280

#define RX_CHANNELS_AETR

#define RX_SPI_DEFAULT_PROTOCOL         RX_SPI_EXPRESSLRS
#define DEFAULT_RX_FEATURE              FEATURE_RX_SPI

#define RX_EXPRESSLRS_TIMER_INSTANCE    TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN     PB9
#define RX_EXPRESSLRS_SPI_BUSY_PIN      PA13

#define BEEPER_PIN                      PA2
#define MOTOR1_PIN                      PB8
#define MOTOR2_PIN                      PA0
#define MOTOR3_PIN                      PB10
#define MOTOR4_PIN                      PB7

#define MOTOR5_PIN                      PA8
#define MOTOR6_PIN                      PA10

#define LED_STRIP_PIN                   PB1

#define UART1_TX_PIN                    PA9
#define UART1_RX_PIN                    PA10

#define LED0_PIN                        PC14

#define SPI1_SCK_PIN                    PA5
#define SPI2_SCK_PIN                    PB13
#define SPI3_SCK_PIN                    PB3
#define SPI1_SDI_PIN                    PA6
#define SPI2_SDI_PIN                    PB14
#define SPI3_SDI_PIN                    PB4
#define SPI1_SDO_PIN                    PA7
#define SPI2_SDO_PIN                    PB15
#define SPI3_SDO_PIN                    PB5

#define ADC_VBAT_PIN                    PA1
#define ADC_CURR_PIN                    PB0

#define MAX7456_SPI_CS_PIN              PB12

#define RX_SPI_CS_PIN                   PA15
#define RX_SPI_EXTI_PIN                 PC13
#define RX_SPI_BIND_PIN                 PB2
#define RX_SPI_LED_PIN                  PC15

#define GYRO_1_EXTI_PIN                 PB6
#define GYRO_1_CS_PIN                   PA4
#define FLASH_CS_PIN                    PA8

#define TIMER_PIN_MAPPING               TIMER_PIN_MAP( 0, PB1 , 2,  0) \
                                        TIMER_PIN_MAP( 1, PB8 , 1,  0) \
                                        TIMER_PIN_MAP( 2, PA0 , 1,  0) \
                                        TIMER_PIN_MAP( 3, PB10, 1,  0) \
                                        TIMER_PIN_MAP( 4, PB7 , 1,  0) \
                                        TIMER_PIN_MAP( 5, PA8 , 1,  0) \
                                        TIMER_PIN_MAP( 6, PA10, 1,  0)

#define ADC1_DMA_OPT                    0

#define FLASH_SPI_INSTANCE              SPI2
#define GYRO_1_SPI_INSTANCE             SPI1
#define MAX7456_SPI_INSTANCE            SPI2
#define RX_SPI_INSTANCE                 SPI3

#define RX_SPI_LED_INVERTED

#define BEEPER_INVERTED

#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST             DSHOT_DMAR_AUTO
#define DEFAULT_DSHOT_BITBANG           DSHOT_BITBANG_OFF
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE     800
#define DEFAULT_VOLTAGE_METER_SCALE     110

#define GYRO_1_ALIGN                    CW180_DEG
