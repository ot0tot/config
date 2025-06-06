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

#define BOARD_NAME                      SUB250F411
#define MANUFACTURER_ID                 SU25

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_ACCGYRO_BMI270
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_DPS310
#define USE_BARO_BMP280
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN                      PB2
#define MOTOR1_PIN                      PB4
#define MOTOR2_PIN                      PB5
#define MOTOR3_PIN                      PB6
#define MOTOR4_PIN                      PB7
#define RX_PPM_PIN                      PA3
#define LED_STRIP_PIN                   PA8
#define UART1_TX_PIN                    PA9
#define UART2_TX_PIN                    PA2
#define UART1_RX_PIN                    PA10
#define UART2_RX_PIN                    PA3
#define INVERTER_PIN_UART2              PC15
#define I2C1_SCL_PIN                    PB8
#define I2C1_SDA_PIN                    PB9
#define LED0_PIN                        PC13
#define LED1_PIN                        PC14
#define SPI1_SCK_PIN                    PA5
#define SPI2_SCK_PIN                    PB13
#define SPI1_SDI_PIN                    PA6
#define SPI2_SDI_PIN                    PB14
#define SPI1_SDO_PIN                    PA7
#define SPI2_SDO_PIN                    PB15
#define ADC_VBAT_PIN                    PB0
#define ADC_CURR_PIN                    PB1
#define PINIO1_PIN                      PB10
#define FLASH_CS_PIN                    PA0
#define MAX7456_SPI_CS_PIN              PB12
#define GYRO_1_EXTI_PIN                 PA1
#define GYRO_1_CS_PIN                   PA4

#define TIMER_PIN_MAPPING               TIMER_PIN_MAP( 0, PA3, 3, -1) \
                                        TIMER_PIN_MAP( 1, PB4, 1,  0) \
                                        TIMER_PIN_MAP( 2, PB5, 1,  0) \
                                        TIMER_PIN_MAP( 3, PB6, 1,  0) \
                                        TIMER_PIN_MAP( 4, PB7, 1,  0) \
                                        TIMER_PIN_MAP( 5, PA8, 1,  0)


#define ADC1_DMA_OPT                    0

#define SERIALRX_UART                   SERIAL_PORT_USART2

#define BARO_I2C_INSTANCE               I2CDEV_1
#define MAG_I2C_INSTANCE                        I2CDEV_1
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH
//TODO #define DSHOT_IDLE_VALUE 800
#define DEFAULT_DSHOT_BURST             DSHOT_DMAR_AUTO
#define DEFAULT_DSHOT_BITBANG           DSHOT_BITBANG_OFF

#define DEFAULT_ALIGN_BOARD_YAW         45
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE     500

#define BEEPER_INVERTED
#define DEFAULT_PID_PROCESS_DENOM 1
#define SYSTEM_HSE_MHZ                  8
#define MAX7456_SPI_INSTANCE            SPI2

#define PINIO1_BOX                      40
#define FLASH_SPI_INSTANCE              SPI2
#define GYRO_1_SPI_INSTANCE             SPI1
#define GYRO_1_ALIGN                    CW270_DEG
