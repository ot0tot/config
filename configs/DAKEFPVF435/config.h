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

#define FC_TARGET_MCU     AT32F435G

#define BOARD_NAME        DAKEFPVF435
#define MANUFACTURER_ID   DAKE

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P

#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_MAX7456

#define BEEPER_PIN           PC3
#define MOTOR1_PIN           PA0
#define MOTOR2_PIN           PA1
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PA3
#define MOTOR5_PIN           PA8
#define MOTOR6_PIN           PA9
#define MOTOR7_PIN           PA10
#define MOTOR8_PIN           PC9
#define LED_STRIP_PIN        PC8
#define SERVO1_PIN           PH3 //  S9
#define SERVO2_PIN           PH2 // S10
#define UART1_TX_PIN         PB6
#define UART1_RX_PIN         PB7
#define UART3_RX_PIN         PB11
#define UART4_TX_PIN         PC10
#define UART4_RX_PIN         PC11
#define UART5_TX_PIN         PC12
#define UART5_RX_PIN         PD2
#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define LED0_PIN             PA15
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PB5
#define CAMERA_CONTROL_PIN   PC5
#define ADC_CURR_PIN         PC0
#define ADC_VBAT_PIN         PC1
#define ADC_RSSI_PIN         PC2
#define PINIO1_PIN           PB0 
#define PINIO2_PIN           PB10
#define FLASH_CS_PIN         PB1
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING          \
    TIMER_PIN_MAP( 0, PA0 , 1,  0) \
    TIMER_PIN_MAP( 1, PA1 , 1,  1) \
    TIMER_PIN_MAP( 2, PA2 , 1,  2) \
    TIMER_PIN_MAP( 3, PA3 , 1,  3) \
    TIMER_PIN_MAP( 4, PA8 , 1,  4) \
    TIMER_PIN_MAP( 5, PA9 , 1,  5) \
    TIMER_PIN_MAP( 6, PA10, 1,  6) \
    TIMER_PIN_MAP( 7, PC9 , 2,  7) \
    TIMER_PIN_MAP( 8, PC8 , 1,  8) \
    TIMER_PIN_MAP( 9, PH3 , 1, -1) \
    TIMER_PIN_MAP( 10,PH2 , 1, -1) \
    TIMER_PIN_MAP( 11,PC5 , 1, -1)

#define ADC1_DMA_OPT        9

#define FLASH_SPI_INSTANCE SPI3
#define MAX7456_SPI_INSTANCE SPI2

#define BARO_I2C_INSTANCE I2CDEV_1
#define MAG_I2C_INSTANCE I2CDEV_1

#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BITBANG        DSHOT_BITBANG_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC

#define BEEPER_INVERTED
#define PINIO1_CONFIG 129
#define PINIO1_BOX 40
#define PINIO2_CONFIG 129
#define PINIO2_BOX 41

#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG

#define SERIALRX_UART           SERIAL_PORT_UART5
#define ESC_SENSOR_UART         SERIAL_PORT_USART3
