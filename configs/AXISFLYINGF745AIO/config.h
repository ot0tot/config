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

#define FC_TARGET_MCU     STM32F745

#define BOARD_NAME        AXISFLYINGF745AIO
#define MANUFACTURER_ID   AXFL

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           PD3
#define MOTOR1_PIN           PB5
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PB4
#define MOTOR4_PIN           PB0
#define MOTOR5_PIN           PE9
#define MOTOR6_PIN           PE11
#define MOTOR7_PIN           PE13
#define MOTOR8_PIN           PE14
#define SERVO1_PIN           PB6
#define SERVO2_PIN           PB7
#define LED_STRIP_PIN        PC9
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART5_TX_PIN         PC12
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define I2C4_SCL_PIN         PD12
#define I2C4_SDA_PIN         PD13
#define LED0_PIN             PD15
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI4_SCK_PIN         PE2
#define SPI1_SDI_PIN         PA6
#define SPI2_SDI_PIN         PB14
#define SPI3_SDI_PIN         PC11
#define SPI4_SDI_PIN         PE5
#define SPI1_SDO_PIN         PA7
#define SPI2_SDO_PIN         PB15
#define SPI3_SDO_PIN         PD6
#define SPI4_SDO_PIN         PE6
#define ESCSERIAL_PIN        PA1
#define CAMERA_CONTROL_PIN   PB3
#define ADC_VBAT_PIN         PC3
#define ADC_CURR_PIN         PC2
#define ADC_EXTERNAL1_PIN    PC1
#define ADC_RSSI_PIN         PC5
#define PINIO1_PIN           PC13
#define FLASH_CS_PIN         PA15
#define MAX7456_SPI_CS_PIN   PE4
#define GYRO_1_EXTI_PIN      PD0
#define GYRO_1_CS_PIN        PA4
#define GYRO_2_EXTI_PIN      PD8
#define GYRO_2_CS_PIN        PB2

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP(  0, PB5,  1,  0) \
    TIMER_PIN_MAP(  1, PB1,  2,  0) \
    TIMER_PIN_MAP(  2, PB4,  1,  0) \
    TIMER_PIN_MAP(  3, PB0,  2,  0) \
    TIMER_PIN_MAP(  4, PE9,  1,  0) \
    TIMER_PIN_MAP(  5, PE11, 1,  0) \
    TIMER_PIN_MAP(  6, PE13, 1,  0) \
    TIMER_PIN_MAP(  7, PE14, 1,  0) \
    TIMER_PIN_MAP(  8, PB6,  1, -1) \
    TIMER_PIN_MAP(  9, PB7,  1, -1) \
    TIMER_PIN_MAP( 10, PC9,  2,  0) \
    TIMER_PIN_MAP( 11, PB3,  1, -1) 


#define ADC1_DMA_OPT                   0

#define MAG_I2C_INSTANCE               I2CDEV_1
#define BARO_I2C_INSTANCE              I2CDEV_4

#define ESC_SENSOR_UART                SERIAL_PORT_UART4

#define DEFAULT_BLACKBOX_DEVICE        BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BITBANG          DSHOT_BITBANG_ON
#define DEFAULT_CURRENT_METER_SOURCE   CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE   VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define PINIO1_CONFIG                  129
#define PINIO1_BOX                     40
#define GYRO_1_SPI_INSTANCE            SPI1
#define FLASH_SPI_INSTANCE             SPI3
#define MAX7456_SPI_INSTANCE           SPI4
