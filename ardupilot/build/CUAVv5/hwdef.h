/*
 generated hardware definitions from hwdef.dat - DO NOT EDIT
*/

#pragma once

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

// MCU type (ChibiOS define)
#define STM32F7xx_MCUCONF
#define STM32F767_MCUCONF

#define STM32F767xx

// crystal frequency
#define STM32_HSECLK 16000000U

// UART used for stdout (printf)
// SDMMC available, enable POSIX filesystem support
#define USE_POSIX

#define HAL_USE_SDC TRUE
#define STM32_SDC_USE_SDMMC1 TRUE
#define STM32_USB_USE_OTG1                  TRUE
#define HAL_USE_USB TRUE
#define HAL_USE_SERIAL_USB TRUE
#define HAL_WITH_UAVCAN 1
#define CONFIG_HAL_BOARD_SUBTYPE HAL_BOARD_SUBTYPE_CHIBIOS_FMUV5
#define HAL_CHIBIOS_ARCH_FMUV5 1
#define HAL_OTG2_PROTOCOL SerialProtocol_MAVLink2
#define HAL_GPIO_SPEKTRUM_PWR 73
#define HAL_SPEKTRUM_PWR_ENABLED 1
#define BOARD_PWM_COUNT_DEFAULT 8
#define HAL_BATT_VOLT_SCALE 18.0
#define HAL_BATT_CURR_SCALE 24.0
#define HAL_BATT_VOLT_PIN 0
#define HAL_BATT_CURR_PIN 1
#define HAL_BATT2_VOLT_PIN 2
#define HAL_BATT2_CURR_PIN 3
#define HAL_HEATER_GPIO_PIN 80
#define HAL_DEFAULT_INS_FAST_SAMPLE 1
#define HAL_PROBE_EXTERNAL_I2C_COMPASSES
#define HAL_GPIO_LED_ON 0
#define HAL_STORAGE_SIZE 16384
#define HAL_WITH_RAMTRON 1
#define HAL_HAVE_SAFETY_SWITCH 1
#define HAL_COMPASS_DEFAULT HAL_COMPASS_NONE
#define HAL_COMPASS_AUTO_ROT_DEFAULT 2
#define HAL_OS_FATFS_IO 1
#define HAL_BOARD_LOG_DIRECTORY "/APM/LOGS"
#define HAL_BOARD_TERRAIN_DIRECTORY "/APM/TERRAIN"
#define HAL_GPIO_A_LED_PIN 0
#define HAL_GPIO_B_LED_PIN 1
#define HAL_GPIO_C_LED_PIN 2
#define HAL_GPIO_LED_ON  0
#define HAL_GPIO_LED_OFF 1
#define HAL_HAVE_PIXRACER_LED
#define BOARD_FLASH_SIZE 2048
#define CRT1_AREAS_NUMBER 1

// location of loaded firmware
#define FLASH_LOAD_ADDRESS 0x08008000

// memory regions
#define HAL_MEMORY_REGIONS {(void*)0x20020000, 0x00060000, 0x00 }, {(void*)0x20000000, 0x00010000, 0x01 }, {(void*)0x20010000, 0x00010000, 0x02 }
#define HAL_MEMORY_TOTAL_KB 512
#define HAL_RAM0_START 0x20020000

// CPU serial number (12 bytes)
#define UDID_START 0x1ff0f420


// APJ board ID (for bootloaders)
#define APJ_BOARD_ID 50
#define HAL_EXPECTED_SYSCLOCK 216000000
#define HAL_SPI1_CONFIG { &SPID1, 1, STM32_SPI_SPI1_DMA_STREAMS }
#define HAL_SPI2_CONFIG { &SPID2, 2, STM32_SPI_SPI2_DMA_STREAMS }
#define HAL_SPI4_CONFIG { &SPID4, 4, STM32_SPI_SPI4_DMA_STREAMS }
#define HAL_SPI_BUS_LIST HAL_SPI1_CONFIG,HAL_SPI2_CONFIG,HAL_SPI4_CONFIG


// SPI device table
#define HAL_SPI_DEVICE0  SPIDesc("ms5611"         ,  2,  1, PAL_LINE(GPIOF,10U), SPIDEV_MODE3,  20*MHZ,  20*MHZ)
#define HAL_SPI_DEVICE1  SPIDesc("icm20689"       ,  0,  1, PAL_LINE(GPIOF,2U) , SPIDEV_MODE3,   2*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE2  SPIDesc("icm20602"       ,  0,  2, PAL_LINE(GPIOF,3U) , SPIDEV_MODE3,   2*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE3  SPIDesc("bmi055_g"       ,  0,  3, PAL_LINE(GPIOF,4U) , SPIDEV_MODE3,  10*MHZ,  10*MHZ)
#define HAL_SPI_DEVICE4  SPIDesc("bmi055_a"       ,  0,  4, PAL_LINE(GPIOG,10U), SPIDEV_MODE3,  10*MHZ,  10*MHZ)
#define HAL_SPI_DEVICE5  SPIDesc("ramtron"        ,  1,  1, PAL_LINE(GPIOF,5U) , SPIDEV_MODE3,   8*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE_LIST HAL_SPI_DEVICE0,HAL_SPI_DEVICE1,HAL_SPI_DEVICE2,HAL_SPI_DEVICE3,HAL_SPI_DEVICE4,HAL_SPI_DEVICE5

// ADC config
#define ANALOG_VCC_5V_PIN 10
#define HAL_HAVE_BOARD_VOLTAGE 1
#define HAL_ANALOG_PINS { \
{  0,    3.30/4096 }, /* PA0 BATT_VOLTAGE_SENS */ \
{  1,    3.30/4096 }, /* PA1 BATT_CURRENT_SENS */ \
{  2,    3.30/4096 }, /* PA2 BATT2_VOLTAGE_SENS */ \
{  3,    3.30/4096 }, /* PA3 BATT2_CURRENT_SENS */ \
{  4,    3.30/4096 }, /* PA4 SPARE2_ADC1 */ \
{  8,    3.30/4096 }, /* PB0 RSSI_IN */ \
{ 10,  2*3.30/4096 }, /* PC0 VDD_5V_SENS */ \
{ 11,  2*3.30/4096 }, /* PC1 SCALED_V3V3 */ \
{ 14,    3.30/4096 }, /* PC4 SPARE1_ADC1 */ \
}

// GPIO config
#define HAL_GPIO_LINE_GPIO0 PAL_LINE(GPIOH, 10U)
#define HAL_GPIO_LINE_GPIO1 PAL_LINE(GPIOH, 11U)
#define HAL_GPIO_LINE_GPIO2 PAL_LINE(GPIOH, 12U)
#define HAL_GPIO_LINE_GPIO50 PAL_LINE(GPIOE, 14U)
#define HAL_GPIO_LINE_GPIO51 PAL_LINE(GPIOA, 10U)
#define HAL_GPIO_LINE_GPIO52 PAL_LINE(GPIOE, 11U)
#define HAL_GPIO_LINE_GPIO53 PAL_LINE(GPIOE,  9U)
#define HAL_GPIO_LINE_GPIO54 PAL_LINE(GPIOD, 13U)
#define HAL_GPIO_LINE_GPIO55 PAL_LINE(GPIOD, 14U)
#define HAL_GPIO_LINE_GPIO56 PAL_LINE(GPIOH,  6U)
#define HAL_GPIO_LINE_GPIO57 PAL_LINE(GPIOH,  9U)
#define HAL_GPIO_LINE_GPIO58 PAL_LINE(GPIOA,  5U)
#define HAL_GPIO_LINE_GPIO59 PAL_LINE(GPIOB,  3U)
#define HAL_GPIO_LINE_GPIO60 PAL_LINE(GPIOB, 11U)
#define HAL_GPIO_LINE_GPIO61 PAL_LINE(GPIOI,  0U)
#define HAL_GPIO_LINE_GPIO70 PAL_LINE(GPIOH,  2U)
#define HAL_GPIO_LINE_GPIO71 PAL_LINE(GPIOH,  3U)
#define HAL_GPIO_LINE_GPIO72 PAL_LINE(GPIOH,  4U)
#define HAL_GPIO_LINE_GPIO73 PAL_LINE(GPIOE,  4U)
#define HAL_GPIO_LINE_GPIO77 PAL_LINE(GPIOE,  5U)
#define HAL_GPIO_LINE_GPIO80 PAL_LINE(GPIOA,  7U)
#define HAL_GPIO_LINE_GPIO90 PAL_LINE(GPIOB,  1U)
#define HAL_GPIO_LINE_GPIO91 PAL_LINE(GPIOC,  6U)
#define HAL_GPIO_LINE_GPIO92 PAL_LINE(GPIOC,  7U)
#define HAL_GPIO_PINS { \
{   0, true,  0, PAL_LINE(GPIOH, 10U)}, /* PH10 LED_R1 OUTPUT */ \
{   1, true,  0, PAL_LINE(GPIOH, 11U)}, /* PH11 LED_G1 OUTPUT */ \
{   2, true,  0, PAL_LINE(GPIOH, 12U)}, /* PH12 LED_B1 OUTPUT */ \
{  50, true,  1, PAL_LINE(GPIOE, 14U)}, /* PE14 TIM1_CH4 TIM1 AF1 PWM1 */ \
{  51, true,  2, PAL_LINE(GPIOA, 10U)}, /* PA10 TIM1_CH3 TIM1 AF1 PWM2 */ \
{  52, true,  3, PAL_LINE(GPIOE, 11U)}, /* PE11 TIM1_CH2 TIM1 AF1 PWM3 */ \
{  53, true,  4, PAL_LINE(GPIOE,  9U)}, /* PE9 TIM1_CH1 TIM1 AF1 PWM4 */ \
{  54, true,  5, PAL_LINE(GPIOD, 13U)}, /* PD13 TIM4_CH2 TIM4 AF2 PWM5 */ \
{  55, true,  6, PAL_LINE(GPIOD, 14U)}, /* PD14 TIM4_CH3 TIM4 AF2 PWM6 */ \
{  56, true,  7, PAL_LINE(GPIOH,  6U)}, /* PH6 TIM12_CH1 TIM12 AF9 PWM7 */ \
{  57, true,  8, PAL_LINE(GPIOH,  9U)}, /* PH9 TIM12_CH2 TIM12 AF9 PWM8 */ \
{  58, true,  0, PAL_LINE(GPIOA,  5U)}, /* PA5 FMU_CAP1 INPUT */ \
{  59, true,  0, PAL_LINE(GPIOB,  3U)}, /* PB3 FMU_CAP2 INPUT */ \
{  60, true,  0, PAL_LINE(GPIOB, 11U)}, /* PB11 FMU_CAP3 INPUT */ \
{  61, true,  0, PAL_LINE(GPIOI,  0U)}, /* PI0 FMU_SPARE_4 INPUT */ \
{  70, true,  0, PAL_LINE(GPIOH,  2U)}, /* PH2 GPIO_CAN1_SILENT OUTPUT */ \
{  71, true,  0, PAL_LINE(GPIOH,  3U)}, /* PH3 GPIO_CAN2_SILENT OUTPUT */ \
{  72, true,  0, PAL_LINE(GPIOH,  4U)}, /* PH4 GPIO_CAN3_SILENT OUTPUT */ \
{  73, true,  0, PAL_LINE(GPIOE,  4U)}, /* PE4 SPEKTRUM_PWR OUTPUT */ \
{  77, true,  0, PAL_LINE(GPIOE,  5U)}, /* PE5 TIM9_CH1 TIM9 AF3 */ \
{  80, true,  0, PAL_LINE(GPIOA,  7U)}, /* PA7 HEATER_EN OUTPUT */ \
{  90, true,  0, PAL_LINE(GPIOB,  1U)}, /* PB1 LED_RED OUTPUT */ \
{  91, true,  0, PAL_LINE(GPIOC,  6U)}, /* PC6 LED_GREEN OUTPUT */ \
{  92, true,  0, PAL_LINE(GPIOC,  7U)}, /* PC7 LED_BLUE OUTPUT */ \
}

// full pin define list
#define HAL_GPIO_PIN_AUXMEM_CS            PAL_LINE(GPIOH,5U)
#define HAL_GPIO_PIN_BATT2_CURRENT_SENS   PAL_LINE(GPIOA,3U)
#define HAL_GPIO_PIN_BATT2_VOLTAGE_SENS   PAL_LINE(GPIOA,2U)
#define HAL_GPIO_PIN_BATT_CURRENT_SENS    PAL_LINE(GPIOA,1U)
#define HAL_GPIO_PIN_BATT_VOLTAGE_SENS    PAL_LINE(GPIOA,0U)
#define HAL_GPIO_PIN_BMI055_A_CS          PAL_LINE(GPIOG,10U)
#define HAL_GPIO_PIN_BMI055_G_CS          PAL_LINE(GPIOF,4U)
#define HAL_GPIO_PIN_CAN1_RX              PAL_LINE(GPIOI,9U)
#define HAL_GPIO_PIN_CAN1_TX              PAL_LINE(GPIOH,13U)
#define HAL_GPIO_PIN_CAN2_RX              PAL_LINE(GPIOB,12U)
#define HAL_GPIO_PIN_CAN2_TX              PAL_LINE(GPIOB,13U)
#define HAL_GPIO_PIN_DRDY1_ICM20689       PAL_LINE(GPIOB,4U)
#define HAL_GPIO_PIN_DRDY2_BMI055_GYRO    PAL_LINE(GPIOB,14U)
#define HAL_GPIO_PIN_DRDY3_BMI055_ACC     PAL_LINE(GPIOB,15U)
#define HAL_GPIO_PIN_DRDY4_ICM20602       PAL_LINE(GPIOC,5U)
#define HAL_GPIO_PIN_DRDY5_BMI055_GYRO    PAL_LINE(GPIOC,13U)
#define HAL_GPIO_PIN_DRDY6_BMI055_ACC     PAL_LINE(GPIOD,10U)
#define HAL_GPIO_PIN_DRDY7_EXTERNAL1      PAL_LINE(GPIOD,15U)
#define HAL_GPIO_PIN_DRDY8_NC             PAL_LINE(GPIOE,7U)
#define HAL_GPIO_PIN_EXTERNAL1_CS1        PAL_LINE(GPIOI,4U)
#define HAL_GPIO_PIN_EXTERNAL1_CS2        PAL_LINE(GPIOI,10U)
#define HAL_GPIO_PIN_EXTERNAL1_CS3        PAL_LINE(GPIOI,11U)
#define HAL_GPIO_PIN_EXTERNAL2_CS1        PAL_LINE(GPIOI,6U)
#define HAL_GPIO_PIN_EXTERNAL2_CS2        PAL_LINE(GPIOI,7U)
#define HAL_GPIO_PIN_EXTERNAL2_CS3        PAL_LINE(GPIOI,8U)
#define HAL_GPIO_PIN_FMU_CAP1             PAL_LINE(GPIOA,5U)
#define HAL_GPIO_PIN_FMU_CAP2             PAL_LINE(GPIOB,3U)
#define HAL_GPIO_PIN_FMU_CAP3             PAL_LINE(GPIOB,11U)
#define HAL_GPIO_PIN_FMU_SPARE_4          PAL_LINE(GPIOI,0U)
#define HAL_GPIO_PIN_FRAM_CS              PAL_LINE(GPIOF,5U)
#define HAL_GPIO_PIN_GPIO_CAN1_SILENT     PAL_LINE(GPIOH,2U)
#define HAL_GPIO_PIN_GPIO_CAN2_SILENT     PAL_LINE(GPIOH,3U)
#define HAL_GPIO_PIN_GPIO_CAN3_SILENT     PAL_LINE(GPIOH,4U)
#define HAL_GPIO_PIN_HEATER_EN            PAL_LINE(GPIOA,7U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_I2C1_SDA             PAL_LINE(GPIOB,9U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_I2C2_SCL             PAL_LINE(GPIOF,1U)
#define HAL_GPIO_PIN_I2C2_SDA             PAL_LINE(GPIOF,0U)
#define HAL_GPIO_PIN_I2C2_SCL             PAL_LINE(GPIOF,1U)
#define HAL_GPIO_PIN_I2C3_SCL             PAL_LINE(GPIOH,7U)
#define HAL_GPIO_PIN_I2C3_SDA             PAL_LINE(GPIOH,8U)
#define HAL_GPIO_PIN_I2C3_SCL             PAL_LINE(GPIOH,7U)
#define HAL_GPIO_PIN_I2C4_SCL             PAL_LINE(GPIOF,14U)
#define HAL_GPIO_PIN_I2C4_SDA             PAL_LINE(GPIOF,15U)
#define HAL_GPIO_PIN_I2C4_SCL             PAL_LINE(GPIOF,14U)
#define HAL_GPIO_PIN_ICM20602_CS          PAL_LINE(GPIOF,3U)
#define HAL_GPIO_PIN_ICM20689_CS          PAL_LINE(GPIOF,2U)
#define HAL_GPIO_PIN_JTCK_SWCLK           PAL_LINE(GPIOA,14U)
#define HAL_GPIO_PIN_JTMS_SWDIO           PAL_LINE(GPIOA,13U)
#define HAL_GPIO_PIN_LED_B1               PAL_LINE(GPIOH,12U)
#define HAL_GPIO_PIN_LED_BLUE             PAL_LINE(GPIOC,7U)
#define HAL_GPIO_PIN_LED_G1               PAL_LINE(GPIOH,11U)
#define HAL_GPIO_PIN_LED_GREEN            PAL_LINE(GPIOC,6U)
#define HAL_GPIO_PIN_LED_R1               PAL_LINE(GPIOH,10U)
#define HAL_GPIO_PIN_LED_RED              PAL_LINE(GPIOB,1U)
#define HAL_GPIO_PIN_MS5611_CS            PAL_LINE(GPIOF,10U)
#define HAL_GPIO_PIN_OTG_FS_DM            PAL_LINE(GPIOA,11U)
#define HAL_GPIO_PIN_OTG_FS_DP            PAL_LINE(GPIOA,12U)
#define HAL_GPIO_PIN_RSSI_IN              PAL_LINE(GPIOB,0U)
#define HAL_GPIO_PIN_SCALED_V3V3          PAL_LINE(GPIOC,1U)
#define HAL_GPIO_PIN_SDMMC_CK             PAL_LINE(GPIOC,12U)
#define HAL_GPIO_PIN_SDMMC_CMD            PAL_LINE(GPIOD,2U)
#define HAL_GPIO_PIN_SDMMC_D0             PAL_LINE(GPIOC,8U)
#define HAL_GPIO_PIN_SDMMC_D1             PAL_LINE(GPIOC,9U)
#define HAL_GPIO_PIN_SDMMC_D2             PAL_LINE(GPIOC,10U)
#define HAL_GPIO_PIN_SDMMC_D3             PAL_LINE(GPIOC,11U)
#define HAL_GPIO_PIN_SPARE1_ADC1          PAL_LINE(GPIOC,4U)
#define HAL_GPIO_PIN_SPARE2_ADC1          PAL_LINE(GPIOA,4U)
#define HAL_GPIO_PIN_SPARE_CS             PAL_LINE(GPIOF,11U)
#define HAL_GPIO_PIN_SPEKTRUM_PWR         PAL_LINE(GPIOE,4U)
#define HAL_GPIO_PIN_SPI1_MISO            PAL_LINE(GPIOA,6U)
#define HAL_GPIO_PIN_SPI1_MOSI            PAL_LINE(GPIOD,7U)
#define HAL_GPIO_PIN_SPI1_SCK             PAL_LINE(GPIOG,11U)
#define HAL_GPIO_PIN_SPI2_MISO            PAL_LINE(GPIOI,2U)
#define HAL_GPIO_PIN_SPI2_MOSI            PAL_LINE(GPIOI,3U)
#define HAL_GPIO_PIN_SPI2_SCK             PAL_LINE(GPIOI,1U)
#define HAL_GPIO_PIN_SPI4_MISO            PAL_LINE(GPIOE,13U)
#define HAL_GPIO_PIN_SPI4_MOSI            PAL_LINE(GPIOE,6U)
#define HAL_GPIO_PIN_SPI4_SCK             PAL_LINE(GPIOE,2U)
#define HAL_GPIO_PIN_TIM12_CH1            PAL_LINE(GPIOH,6U)
#define HAL_GPIO_PIN_TIM12_CH2            PAL_LINE(GPIOH,9U)
#define HAL_GPIO_PIN_TIM1_CH1             PAL_LINE(GPIOE,9U)
#define HAL_GPIO_PIN_TIM1_CH2             PAL_LINE(GPIOE,11U)
#define HAL_GPIO_PIN_TIM1_CH3             PAL_LINE(GPIOA,10U)
#define HAL_GPIO_PIN_TIM1_CH4             PAL_LINE(GPIOE,14U)
#define HAL_GPIO_PIN_TIM4_CH2             PAL_LINE(GPIOD,13U)
#define HAL_GPIO_PIN_TIM4_CH3             PAL_LINE(GPIOD,14U)
#define HAL_GPIO_PIN_TIM9_CH1             PAL_LINE(GPIOE,5U)
#define HAL_GPIO_PIN_UART4_RX             PAL_LINE(GPIOD,0U)
#define HAL_GPIO_PIN_UART4_TX             PAL_LINE(GPIOD,1U)
#define HAL_GPIO_PIN_UART7_RX             PAL_LINE(GPIOF,6U)
#define HAL_GPIO_PIN_UART7_TX             PAL_LINE(GPIOE,8U)
#define HAL_GPIO_PIN_UART8_RX             PAL_LINE(GPIOE,0U)
#define HAL_GPIO_PIN_UART8_TX             PAL_LINE(GPIOE,1U)
#define HAL_GPIO_PIN_USART1_RX            PAL_LINE(GPIOB,7U)
#define HAL_GPIO_PIN_USART1_TX            PAL_LINE(GPIOB,6U)
#define HAL_GPIO_PIN_USART2_CTS           PAL_LINE(GPIOD,3U)
#define HAL_GPIO_PIN_USART2_RTS           PAL_LINE(GPIOD,4U)
#define HAL_GPIO_PIN_USART2_RX            PAL_LINE(GPIOD,6U)
#define HAL_GPIO_PIN_USART2_TX            PAL_LINE(GPIOD,5U)
#define HAL_GPIO_PIN_USART3_CTS           PAL_LINE(GPIOD,11U)
#define HAL_GPIO_PIN_USART3_RTS           PAL_LINE(GPIOD,12U)
#define HAL_GPIO_PIN_USART3_RX            PAL_LINE(GPIOD,9U)
#define HAL_GPIO_PIN_USART3_TX            PAL_LINE(GPIOD,8U)
#define HAL_GPIO_PIN_USART6_CTS           PAL_LINE(GPIOG,15U)
#define HAL_GPIO_PIN_USART6_RTS           PAL_LINE(GPIOG,8U)
#define HAL_GPIO_PIN_USART6_RX            PAL_LINE(GPIOG,9U)
#define HAL_GPIO_PIN_VDD_3V3_SD_CARD_EN   PAL_LINE(GPIOG,7U)
#define HAL_GPIO_PIN_VDD_3V3_SENSORS_EN   PAL_LINE(GPIOE,3U)
#define HAL_GPIO_PIN_VDD_5V_HIPOWER_OC    PAL_LINE(GPIOF,13U)
#define HAL_GPIO_PIN_VDD_5V_PERIPH_OC     PAL_LINE(GPIOE,15U)
#define HAL_GPIO_PIN_VDD_5V_RC_EN         PAL_LINE(GPIOG,5U)
#define HAL_GPIO_PIN_VDD_5V_SENS          PAL_LINE(GPIOC,0U)
#define HAL_GPIO_PIN_VDD_5V_WIFI_EN       PAL_LINE(GPIOG,6U)
#define HAL_GPIO_PIN_VDD_BRICK2_VALID     PAL_LINE(GPIOG,2U)
#define HAL_GPIO_PIN_VDD_BRICK_VALID      PAL_LINE(GPIOG,1U)
#define HAL_GPIO_PIN_nSPI5_RESET_EXTERNAL1 PAL_LINE(GPIOB,10U)
#define HAL_GPIO_PIN_nVBUS                PAL_LINE(GPIOG,3U)
#define HAL_GPIO_PIN_nVDD_5V_HIPOWER_EN   PAL_LINE(GPIOF,12U)
#define HAL_GPIO_PIN_nVDD_5V_PERIPH_EN    PAL_LINE(GPIOG,4U)

#define HAL_INS_PROBE1  ADD_BACKEND(AP_InertialSensor_Invensense::probe(*this,hal.spi->get_device("icm20689"),ROTATION_NONE))
#define HAL_INS_PROBE2  ADD_BACKEND(AP_InertialSensor_Invensense::probe(*this,hal.spi->get_device("icm20602"),ROTATION_NONE))
#define HAL_INS_PROBE3  ADD_BACKEND(AP_InertialSensor_BMI055::probe(*this,hal.spi->get_device("bmi055_a"),hal.spi->get_device("bmi055_g"),ROTATION_ROLL_180_YAW_90))
#define HAL_INS_PROBE4  ADD_BACKEND(AP_InertialSensor_BMI088::probe(*this,hal.spi->get_device("bmi055_a"),hal.spi->get_device("bmi055_g"),ROTATION_ROLL_180_YAW_90))
#define HAL_INS_PROBE_LIST HAL_INS_PROBE1;HAL_INS_PROBE2;HAL_INS_PROBE3;HAL_INS_PROBE4

#define HAL_MAG_PROBE1 FOREACH_I2C_EXTERNAL(b) ADD_BACKEND(DRIVER_IST8310, AP_Compass_IST8310::probe(GET_I2C_DEVICE(b,0x0e),true,ROTATION_ROLL_180_YAW_90))
#define HAL_MAG_PROBE2 FOREACH_I2C_INTERNAL(b) ADD_BACKEND(DRIVER_IST8310, AP_Compass_IST8310::probe(GET_I2C_DEVICE(b,0x0e),false,ROTATION_ROLL_180_YAW_90))
#define HAL_MAG_PROBE_LIST HAL_MAG_PROBE1;HAL_MAG_PROBE2

#define HAL_BARO_PROBE1  ADD_BACKEND(AP_Baro_MS56XX::probe(*this,hal.spi->get_device("ms5611")))
#define HAL_BARO_PROBE_LIST HAL_BARO_PROBE1

// peripherals enabled
#define STM32_I2C_USE_I2C1                  TRUE
#define STM32_I2C_USE_I2C2                  TRUE
#define STM32_I2C_USE_I2C3                  TRUE
#define STM32_I2C_USE_I2C4                  TRUE
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_SPI_USE_SPI1                  TRUE
#define STM32_SPI_USE_SPI2                  TRUE
#define STM32_SPI_USE_SPI4                  TRUE
#ifndef STM32_SERIAL_USE_UART4 
#define STM32_SERIAL_USE_UART4  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART7 
#define STM32_SERIAL_USE_UART7  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART8 
#define STM32_SERIAL_USE_UART8  TRUE
#endif
#ifndef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART3
#define STM32_SERIAL_USE_USART3 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART6
#define STM32_SERIAL_USE_USART6 TRUE
#endif


// auto-generated DMA mapping from dma_resolver.py

// Note: The following peripherals can't be resolved for DMA: ['TIM4_UP', 'USART2_RX', 'USART2_TX', 'USART3_RX']

#define STM32_ADC_ADC1_DMA_STREAM      STM32_DMA_STREAM_ID(2, 4)
#define STM32_ADC_ADC1_DMA_CHAN        0
#define STM32_I2C_I2C1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 5) // shared I2C1_RX,I2C4_TX
#define STM32_I2C_I2C1_RX_DMA_CHAN     1
#define STM32_I2C_I2C1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared I2C1_TX,I2C2_TX
#define STM32_I2C_I2C1_TX_DMA_CHAN     1
#define STM32_I2C_I2C2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 3) // shared I2C2_RX,USART3_TX
#define STM32_I2C_I2C2_RX_DMA_CHAN     7
#define STM32_I2C_I2C2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared I2C1_TX,I2C2_TX
#define STM32_I2C_I2C2_TX_DMA_CHAN     7
#define STM32_I2C_I2C3_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 2) // shared I2C3_RX,I2C4_RX
#define STM32_I2C_I2C3_RX_DMA_CHAN     3
#define STM32_I2C_I2C3_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,I2C3_TX
#define STM32_I2C_I2C3_TX_DMA_CHAN     3
#define STM32_I2C_I2C4_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 2) // shared I2C3_RX,I2C4_RX
#define STM32_I2C_I2C4_RX_DMA_CHAN     2
#define STM32_I2C_I2C4_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 5) // shared I2C1_RX,I2C4_TX
#define STM32_I2C_I2C4_TX_DMA_CHAN     2
#define STM32_SDC_SDMMC1_DMA_STREAM    STM32_DMA_STREAM_ID(2, 6)
#define STM32_SDC_SDMMC1_DMA_CHAN      4
#define STM32_SPI_SPI1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 2)
#define STM32_SPI_SPI1_RX_DMA_CHAN     3
#define STM32_SPI_SPI1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 3)
#define STM32_SPI_SPI1_TX_DMA_CHAN     3
#define STM32_SPI_SPI2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 1)
#define STM32_SPI_SPI2_RX_DMA_CHAN     9
#define STM32_SPI_SPI2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,I2C3_TX
#define STM32_SPI_SPI2_TX_DMA_CHAN     0
#define STM32_SPI_SPI4_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 0)
#define STM32_SPI_SPI4_RX_DMA_CHAN     4
#define STM32_SPI_SPI4_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 1)
#define STM32_SPI_SPI4_TX_DMA_CHAN     4
#define STM32_TIM_TIM1_UP_DMA_STREAM   STM32_DMA_STREAM_ID(2, 5)
#define STM32_TIM_TIM1_UP_DMA_CHAN     6
#define STM32_UART_UART8_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 6)
#define STM32_UART_UART8_RX_DMA_CHAN   5
#define STM32_UART_UART8_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 0)
#define STM32_UART_UART8_TX_DMA_CHAN   5
#define STM32_UART_USART3_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 3) // shared I2C2_RX,USART3_TX
#define STM32_UART_USART3_TX_DMA_CHAN  4


// generated UART DMA configuration lines
#define STM32_USART1_RX_DMA_CONFIG false, 0, 0
#define STM32_USART1_TX_DMA_CONFIG false, 0, 0
#define STM32_USART2_RX_DMA_CONFIG false, 0, 0
#define STM32_USART2_TX_DMA_CONFIG false, 0, 0
#define STM32_USART3_RX_DMA_CONFIG false, 0, 0
#define STM32_USART3_TX_DMA_CONFIG true, STM32_UART_USART3_TX_DMA_STREAM, STM32_UART_USART3_TX_DMA_CHAN
#define STM32_UART4_RX_DMA_CONFIG false, 0, 0
#define STM32_UART4_TX_DMA_CONFIG false, 0, 0
#define STM32_USART6_RX_DMA_CONFIG false, 0, 0
#define STM32_USART6_TX_DMA_CONFIG false, 0, 0
#define STM32_UART7_RX_DMA_CONFIG false, 0, 0
#define STM32_UART7_TX_DMA_CONFIG false, 0, 0
#define STM32_UART8_RX_DMA_CONFIG true, STM32_UART_UART8_RX_DMA_STREAM, STM32_UART_UART8_RX_DMA_CHAN
#define STM32_UART8_TX_DMA_CONFIG true, STM32_UART_UART8_TX_DMA_STREAM, STM32_UART_UART8_TX_DMA_CHAN


// generated SPI DMA configuration lines
#define STM32_SPI_SPI1_DMA_STREAMS STM32_SPI_SPI1_TX_DMA_STREAM, STM32_SPI_SPI1_RX_DMA_STREAM
#define STM32_SPI_SPI2_DMA_STREAMS STM32_SPI_SPI2_TX_DMA_STREAM, STM32_SPI_SPI2_RX_DMA_STREAM
#define STM32_SPI_SPI4_DMA_STREAMS STM32_SPI_SPI4_TX_DMA_STREAM, STM32_SPI_SPI4_RX_DMA_STREAM

// Alarm PWM output config
#define STM32_PWM_USE_TIM9 TRUE
#define STM32_TIM9_SUPPRESS_ISR
#define HAL_PWM_ALARM \
        { /* pwmGroup */ \
          0,  /* Timer channel */ \
          { /* PWMConfig */ \
            1000000,    /* PWM clock frequency. */ \
            1000,    /* Initial PWM period 20ms. */ \
            NULL,  /* no callback */ \
            { /* Channel Config */ \
             {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}  \
            }, \
            0, 0 \
          }, \
          &PWMD9 /* PWMDriver* */ \
        }

// PWM timer config
#define STM32_PWM_USE_TIM1 TRUE
#define STM32_TIM1_SUPPRESS_ISR
#define STM32_PWM_USE_TIM12 TRUE
#define STM32_TIM12_SUPPRESS_ISR
#define STM32_PWM_USE_TIM4 TRUE
#define STM32_TIM4_SUPPRESS_ISR

// PWM output config
#if defined(STM32_TIM_TIM1_UP_DMA_STREAM) && defined(STM32_TIM_TIM1_UP_DMA_CHAN)
# define HAL_PWM1_DMA_CONFIG true, STM32_TIM_TIM1_UP_DMA_STREAM, STM32_TIM_TIM1_UP_DMA_CHAN
#else
# define HAL_PWM1_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP1 { true, \
        {3, 2, 1, 0}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD1, \
          HAL_PWM1_DMA_CONFIG, \
          { 1, 1, 1, 1 }, \
          { PAL_LINE(GPIOE, 9U), PAL_LINE(GPIOE, 11U), PAL_LINE(GPIOA, 10U), PAL_LINE(GPIOE, 14U) }}
#if defined(STM32_TIM_TIM12_UP_DMA_STREAM) && defined(STM32_TIM_TIM12_UP_DMA_CHAN)
# define HAL_PWM12_DMA_CONFIG true, STM32_TIM_TIM12_UP_DMA_STREAM, STM32_TIM_TIM12_UP_DMA_CHAN
#else
# define HAL_PWM12_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP2 { false, \
        {6, 7, 255, 255}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}  \
          }, 0, 0}, &PWMD12, \
          HAL_PWM12_DMA_CONFIG, \
          { 9, 9, 0, 0 }, \
          { PAL_LINE(GPIOH, 6U), PAL_LINE(GPIOH, 9U), 0, 0 }}
#if defined(STM32_TIM_TIM4_UP_DMA_STREAM) && defined(STM32_TIM_TIM4_UP_DMA_CHAN)
# define HAL_PWM4_DMA_CONFIG true, STM32_TIM_TIM4_UP_DMA_STREAM, STM32_TIM_TIM4_UP_DMA_CHAN
#else
# define HAL_PWM4_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP3 { false, \
        {255, 4, 5, 255}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}  \
          }, 0, 0}, &PWMD4, \
          HAL_PWM4_DMA_CONFIG, \
          { 0, 2, 2, 0 }, \
          { 0, PAL_LINE(GPIOD, 13U), PAL_LINE(GPIOD, 14U), 0 }}
#define HAL_PWM_GROUPS HAL_PWM_GROUP1,HAL_PWM_GROUP2,HAL_PWM_GROUP3

// I2C configuration

#if defined(STM32_I2C_I2C3_RX_DMA_STREAM) && defined(STM32_I2C_I2C3_TX_DMA_STREAM)
#define HAL_I2C3_CONFIG { &I2CD3, STM32_I2C_I2C3_RX_DMA_STREAM, STM32_I2C_I2C3_TX_DMA_STREAM, PAL_LINE(GPIOH,7U), PAL_LINE(GPIOH,8U) }
#else
#define HAL_I2C3_CONFIG { &I2CD3, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOH,7U), PAL_LINE(GPIOH,8U) }
#endif

#if defined(STM32_I2C_I2C1_RX_DMA_STREAM) && defined(STM32_I2C_I2C1_TX_DMA_STREAM)
#define HAL_I2C1_CONFIG { &I2CD1, STM32_I2C_I2C1_RX_DMA_STREAM, STM32_I2C_I2C1_TX_DMA_STREAM, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#else
#define HAL_I2C1_CONFIG { &I2CD1, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#endif

#if defined(STM32_I2C_I2C2_RX_DMA_STREAM) && defined(STM32_I2C_I2C2_TX_DMA_STREAM)
#define HAL_I2C2_CONFIG { &I2CD2, STM32_I2C_I2C2_RX_DMA_STREAM, STM32_I2C_I2C2_TX_DMA_STREAM, PAL_LINE(GPIOF,1U), PAL_LINE(GPIOF,0U) }
#else
#define HAL_I2C2_CONFIG { &I2CD2, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOF,1U), PAL_LINE(GPIOF,0U) }
#endif

#if defined(STM32_I2C_I2C4_RX_DMA_STREAM) && defined(STM32_I2C_I2C4_TX_DMA_STREAM)
#define HAL_I2C4_CONFIG { &I2CD4, STM32_I2C_I2C4_RX_DMA_STREAM, STM32_I2C_I2C4_TX_DMA_STREAM, PAL_LINE(GPIOF,14U), PAL_LINE(GPIOF,15U) }
#else
#define HAL_I2C4_CONFIG { &I2CD4, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOF,14U), PAL_LINE(GPIOF,15U) }
#endif

#define HAL_I2C_DEVICE_LIST HAL_I2C3_CONFIG,HAL_I2C1_CONFIG,HAL_I2C2_CONFIG,HAL_I2C4_CONFIG


// UART configuration
#define HAL_UARTA_DRIVER ChibiOS::UARTDriver uartADriver(0)
#define HAL_UARTB_DRIVER ChibiOS::UARTDriver uartBDriver(1)
#define HAL_UARTC_DRIVER ChibiOS::UARTDriver uartCDriver(2)
#define HAL_UARTD_DRIVER ChibiOS::UARTDriver uartDDriver(3)
#define HAL_UARTE_DRIVER ChibiOS::UARTDriver uartEDriver(4)
#define HAL_UARTF_DRIVER ChibiOS::UARTDriver uartFDriver(5)
#define HAL_UARTG_DRIVER ChibiOS::UARTDriver uartGDriver(6)
#define HAL_UARTH_DRIVER ChibiOS::UARTDriver uartHDriver(7)
#define HAL_WITH_IO_MCU 1
#define HAL_UART_IOMCU_IDX 8
#define HAL_UART_IO_DRIVER ChibiOS::UARTDriver uart_io(HAL_UART_IOMCU_IDX)
#define HAL_HAVE_SERVO_VOLTAGE 1
#define AP_FEATURE_SBUS_OUT 1

#define HAL_OTG1_CONFIG {(BaseSequentialStream*) &SDU1, true, false, 0, 0, false, 0, 0}
#define HAL_USART1_CONFIG { (BaseSequentialStream*) &SD1, false, STM32_USART1_RX_DMA_CONFIG, STM32_USART1_TX_DMA_CONFIG, PAL_LINE(GPIOB,6U), PAL_LINE(GPIOB,7U), 0, -1, 0, -1, 0}
#define HAL_USART2_CONFIG { (BaseSequentialStream*) &SD2, false, STM32_USART2_RX_DMA_CONFIG, STM32_USART2_TX_DMA_CONFIG, PAL_LINE(GPIOD,5U), PAL_LINE(GPIOD,6U), PAL_LINE(GPIOD,4U), -1, 0, -1, 0}
#define HAL_USART3_CONFIG { (BaseSequentialStream*) &SD3, false, STM32_USART3_RX_DMA_CONFIG, STM32_USART3_TX_DMA_CONFIG, PAL_LINE(GPIOD,8U), PAL_LINE(GPIOD,9U), PAL_LINE(GPIOD,12U), -1, 0, -1, 0}
#define HAL_UART4_CONFIG { (BaseSequentialStream*) &SD4, false, STM32_UART4_RX_DMA_CONFIG, STM32_UART4_TX_DMA_CONFIG, PAL_LINE(GPIOD,1U), PAL_LINE(GPIOD,0U), 0, -1, 0, -1, 0}
#define HAL_USART6_CONFIG { (BaseSequentialStream*) &SD6, false, STM32_USART6_RX_DMA_CONFIG, STM32_USART6_TX_DMA_CONFIG, 0, PAL_LINE(GPIOG,9U), PAL_LINE(GPIOG,8U), -1, 0, -1, 0}
#define HAL_UART7_CONFIG { (BaseSequentialStream*) &SD7, false, STM32_UART7_RX_DMA_CONFIG, STM32_UART7_TX_DMA_CONFIG, PAL_LINE(GPIOE,8U), PAL_LINE(GPIOF,6U), 0, -1, 0, -1, 0}
#define HAL_OTG2_CONFIG {(BaseSequentialStream*) &SDU2, true, false, 0, 0, false, 0, 0}
#define HAL_UART8_CONFIG { (BaseSequentialStream*) &SD8, false, STM32_UART8_RX_DMA_CONFIG, STM32_UART8_TX_DMA_CONFIG, PAL_LINE(GPIOE,1U), PAL_LINE(GPIOE,0U), 0, -1, 0, -1, 0}
#define AP_FEATURE_RTSCTS 1
#define HAL_OTG2_UART_INDEX 7

#if HAL_WITH_UAVCAN
#ifndef HAL_OTG2_PROTOCOL
#define HAL_OTG2_PROTOCOL SerialProtocol_SLCAN
#endif
#define HAL_SERIAL7_PROTOCOL HAL_OTG2_PROTOCOL
#define HAL_SERIAL7_BAUD 115200
#endif
#define HAL_HAVE_DUAL_USB_CDC 1
#define HAL_UART_DEVICE_LIST HAL_OTG1_CONFIG,HAL_USART1_CONFIG,HAL_USART2_CONFIG,HAL_USART3_CONFIG,HAL_UART4_CONFIG,HAL_USART6_CONFIG,HAL_UART7_CONFIG,HAL_OTG2_CONFIG,HAL_UART8_CONFIG

#define HAL_UART_NUM_SERIAL_PORTS 8
// USB configuration
#define HAL_USB_VENDOR_ID 0x1209
#define HAL_USB_PRODUCT_ID 0x5740
#define HAL_USB_STRING_MANUFACTURER "ArduPilot"
#define HAL_USB_STRING_PRODUCT "%BOARD%"
#define HAL_USB_STRING_SERIAL "%SERIAL%"


#define HAL_HAVE_AP_ROMFS_EMBEDDED_H 1

/*
* I/O ports initial setup, this configuration is established soon after reset
* in the initialization code.
* Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORTA:
 PA0 BATT_VOLTAGE_SENS ADC1 ADC1_IN0
 PA1 BATT_CURRENT_SENS ADC1 ADC1_IN1
 PA2 BATT2_VOLTAGE_SENS ADC1 ADC1_IN2
 PA3 BATT2_CURRENT_SENS ADC1 ADC1_IN3
 PA4 SPARE2_ADC1 ADC1 ADC1_IN4
 PA5 FMU_CAP1 INPUT
 PA6 SPI1_MISO SPI1 AF5
 PA7 HEATER_EN OUTPUT
 PA10 TIM1_CH3 TIM1 AF1 PWM2
 PA11 OTG_FS_DM OTG1 AF10
 PA12 OTG_FS_DP OTG1 AF10
 PA13 JTMS-SWDIO SWD AF0
 PA14 JTCK-SWCLK SWD AF0
*/

#define VAL_GPIOA_MODER   (PIN_MODE_ANALOG(0U) | \
                           PIN_MODE_ANALOG(1U) | \
                           PIN_MODE_ANALOG(2U) | \
                           PIN_MODE_ANALOG(3U) | \
                           PIN_MODE_ANALOG(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_OUTPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOA_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOA_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOA_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOA_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_LOW(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOA_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOA_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 1U) | \
                           PIN_AFIO_AF(11U, 10U) | \
                           PIN_AFIO_AF(12U, 10U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTB:
 PB0 RSSI_IN ADC1 ADC1_IN8
 PB1 LED_RED OUTPUT
 PB3 FMU_CAP2 INPUT
 PB4 DRDY1_ICM20689 INPUT
 PB6 USART1_TX USART1 AF7
 PB7 USART1_RX USART1 AF7
 PB8 I2C1_SCL I2C1 AF4
 PB9 I2C1_SDA I2C1 AF4
 PB10 nSPI5_RESET_EXTERNAL1 OUTPUT
 PB11 FMU_CAP3 INPUT
 PB12 CAN2_RX CAN2 AF9
 PB13 CAN2_TX CAN2 AF9
 PB14 DRDY2_BMI055_GYRO INPUT
 PB15 DRDY3_BMI055_ACC INPUT
*/

#define VAL_GPIOB_MODER   (PIN_MODE_ANALOG(0U) | \
                           PIN_MODE_OUTPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOB_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_OPENDRAIN(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_OPENDRAIN(8U) | \
                           PIN_OTYPE_OPENDRAIN(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOB_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOB_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOB_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOB_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 7U) | \
                           PIN_AFIO_AF(7U, 7U))

#define VAL_GPIOB_AFRH    (PIN_AFIO_AF(8U, 4U) | \
                           PIN_AFIO_AF(9U, 4U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 9U) | \
                           PIN_AFIO_AF(13U, 9U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTC:
 PC0 VDD_5V_SENS ADC1 ADC1_IN10
 PC1 SCALED_V3V3 ADC1 ADC1_IN11
 PC4 SPARE1_ADC1 ADC1 ADC1_IN14
 PC5 DRDY4_ICM20602 INPUT
 PC6 LED_GREEN OUTPUT
 PC7 LED_BLUE OUTPUT
 PC8 SDMMC_D0 SDMMC1 AF12
 PC9 SDMMC_D1 SDMMC1 AF12
 PC10 SDMMC_D2 SDMMC1 AF12
 PC11 SDMMC_D3 SDMMC1 AF12
 PC12 SDMMC_CK SDMMC1 AF12
 PC13 DRDY5_BMI055_GYRO INPUT
*/

#define VAL_GPIOC_MODER   (PIN_MODE_ANALOG(0U) | \
                           PIN_MODE_ANALOG(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_ANALOG(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_OUTPUT(6U) | \
                           PIN_MODE_OUTPUT(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOC_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOC_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOC_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOC_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_LOW(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOC_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOC_AFRH    (PIN_AFIO_AF(8U, 12U) | \
                           PIN_AFIO_AF(9U, 12U) | \
                           PIN_AFIO_AF(10U, 12U) | \
                           PIN_AFIO_AF(11U, 12U) | \
                           PIN_AFIO_AF(12U, 12U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTD:
 PD0 UART4_RX UART4 AF8
 PD1 UART4_TX UART4 AF8
 PD2 SDMMC_CMD SDMMC1 AF12
 PD3 USART2_CTS USART2 AF7
 PD4 USART2_RTS USART2
 PD5 USART2_TX USART2 AF7
 PD6 USART2_RX USART2 AF7
 PD7 SPI1_MOSI SPI1 AF5
 PD8 USART3_TX USART3 AF7
 PD9 USART3_RX USART3 AF7
 PD10 DRDY6_BMI055_ACC INPUT
 PD11 USART3_CTS USART3 AF7
 PD12 USART3_RTS USART3
 PD13 TIM4_CH2 TIM4 AF2 PWM5
 PD14 TIM4_CH3 TIM4 AF2 PWM6
 PD15 DRDY7_EXTERNAL1 INPUT
*/

#define VAL_GPIOD_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOD_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOD_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOD_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLUP(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_PULLUP(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOD_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOD_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 8U) | \
                           PIN_AFIO_AF(2U, 12U) | \
                           PIN_AFIO_AF(3U, 7U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 7U) | \
                           PIN_AFIO_AF(6U, 7U) | \
                           PIN_AFIO_AF(7U, 5U))

#define VAL_GPIOD_AFRH    (PIN_AFIO_AF(8U, 7U) | \
                           PIN_AFIO_AF(9U, 7U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 7U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 2U) | \
                           PIN_AFIO_AF(14U, 2U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTE:
 PE0 UART8_RX UART8 AF8
 PE1 UART8_TX UART8 AF8
 PE2 SPI4_SCK SPI4 AF5
 PE3 VDD_3V3_SENSORS_EN OUTPUT
 PE4 SPEKTRUM_PWR OUTPUT
 PE5 TIM9_CH1 TIM9 AF3
 PE6 SPI4_MOSI SPI4 AF5
 PE7 DRDY8_NC INPUT
 PE8 UART7_TX UART7 AF8
 PE9 TIM1_CH1 TIM1 AF1 PWM4
 PE11 TIM1_CH2 TIM1 AF1 PWM3
 PE13 SPI4_MISO SPI4 AF5
 PE14 TIM1_CH4 TIM1 AF1 PWM1
 PE15 VDD_5V_PERIPH_OC INPUT
*/

#define VAL_GPIOE_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_OUTPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOE_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOE_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOE_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_PULLUP(15U))

#define VAL_GPIOE_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOE_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 8U) | \
                           PIN_AFIO_AF(2U, 5U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 3U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOE_AFRH    (PIN_AFIO_AF(8U, 8U) | \
                           PIN_AFIO_AF(9U, 1U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 1U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 5U) | \
                           PIN_AFIO_AF(14U, 1U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTF:
 PF0 I2C2_SDA I2C2 AF4
 PF1 I2C2_SCL I2C2 AF4
 PF2 ICM20689_CS CS
 PF3 ICM20602_CS CS
 PF4 BMI055_G_CS CS
 PF5 FRAM_CS CS
 PF6 UART7_RX UART7 AF8
 PF10 MS5611_CS CS
 PF11 SPARE_CS CS
 PF12 nVDD_5V_HIPOWER_EN OUTPUT
 PF13 VDD_5V_HIPOWER_OC INPUT
 PF14 I2C4_SCL I2C4 AF4
 PF15 I2C4_SDA I2C4 AF4
*/

#define VAL_GPIOF_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_OUTPUT(2U) | \
                           PIN_MODE_OUTPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_OUTPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_OUTPUT(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOF_OTYPER  (PIN_OTYPE_OPENDRAIN(0U) | \
                           PIN_OTYPE_OPENDRAIN(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_OPENDRAIN(14U) | \
                           PIN_OTYPE_OPENDRAIN(15U))

#define VAL_GPIOF_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_VERYLOW(2U) | \
                           PIN_OSPEED_VERYLOW(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_VERYLOW(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOF_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLUP(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_PULLUP(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOF_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOF_AFRL    (PIN_AFIO_AF(0U, 4U) | \
                           PIN_AFIO_AF(1U, 4U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 8U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOF_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 4U) | \
                           PIN_AFIO_AF(15U, 4U))

/* PORTG:
 PG1 VDD_BRICK_VALID INPUT
 PG2 VDD_BRICK2_VALID INPUT
 PG3 nVBUS INPUT
 PG4 nVDD_5V_PERIPH_EN OUTPUT
 PG5 VDD_5V_RC_EN OUTPUT
 PG6 VDD_5V_WIFI_EN OUTPUT
 PG7 VDD_3V3_SD_CARD_EN OUTPUT
 PG8 USART6_RTS USART6
 PG9 USART6_RX USART6 AF8
 PG10 BMI055_A_CS CS
 PG11 SPI1_SCK SPI1 AF5
 PG15 USART6_CTS USART6 AF8
*/

#define VAL_GPIOG_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_OUTPUT(5U) | \
                           PIN_MODE_OUTPUT(6U) | \
                           PIN_MODE_OUTPUT(7U) | \
                           PIN_MODE_OUTPUT(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOG_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOG_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOG_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLUP(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_PULLUP(15U))

#define VAL_GPIOG_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOG_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOG_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 8U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 5U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 8U))

/* PORTH:
 PH2 GPIO_CAN1_SILENT OUTPUT
 PH3 GPIO_CAN2_SILENT OUTPUT
 PH4 GPIO_CAN3_SILENT OUTPUT
 PH5 AUXMEM_CS CS
 PH6 TIM12_CH1 TIM12 AF9 PWM7
 PH7 I2C3_SCL I2C3 AF4
 PH8 I2C3_SDA I2C3 AF4
 PH9 TIM12_CH2 TIM12 AF9 PWM8
 PH10 LED_R1 OUTPUT
 PH11 LED_G1 OUTPUT
 PH12 LED_B1 OUTPUT
 PH13 CAN1_TX CAN1 AF9
*/

#define VAL_GPIOH_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_OUTPUT(2U) | \
                           PIN_MODE_OUTPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_OUTPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_OUTPUT(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOH_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_OPENDRAIN(7U) | \
                           PIN_OTYPE_OPENDRAIN(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_OPENDRAIN(10U) | \
                           PIN_OTYPE_OPENDRAIN(11U) | \
                           PIN_OTYPE_OPENDRAIN(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOH_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_LOW(2U) | \
                           PIN_OSPEED_LOW(3U) | \
                           PIN_OSPEED_LOW(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOH_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOH_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_LOW(2U) | \
                           PIN_ODR_LOW(3U) | \
                           PIN_ODR_LOW(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOH_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 9U) | \
                           PIN_AFIO_AF(7U, 4U))

#define VAL_GPIOH_AFRH    (PIN_AFIO_AF(8U, 4U) | \
                           PIN_AFIO_AF(9U, 9U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 9U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTI:
 PI0 FMU_SPARE_4 INPUT
 PI1 SPI2_SCK SPI2 AF5
 PI2 SPI2_MISO SPI2 AF5
 PI3 SPI2_MOSI SPI2 AF5
 PI4 EXTERNAL1_CS1 CS
 PI6 EXTERNAL2_CS1 CS
 PI7 EXTERNAL2_CS2 CS
 PI8 EXTERNAL2_CS3 CS
 PI9 CAN1_RX CAN1 AF9
 PI10 EXTERNAL1_CS2 CS
 PI11 EXTERNAL1_CS3 CS
*/

#define VAL_GPIOI_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_OUTPUT(6U) | \
                           PIN_MODE_OUTPUT(7U) | \
                           PIN_MODE_OUTPUT(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_OUTPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOI_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOI_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOI_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOI_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOI_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 5U) | \
                           PIN_AFIO_AF(2U, 5U) | \
                           PIN_AFIO_AF(3U, 5U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOI_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 9U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTJ:
*/

#define VAL_GPIOJ_MODER               0x0
#define VAL_GPIOJ_OTYPER              0x0
#define VAL_GPIOJ_OSPEEDR             0x0
#define VAL_GPIOJ_PUPDR               0x0
#define VAL_GPIOJ_ODR                 0x0
#define VAL_GPIOJ_AFRL                0x0
#define VAL_GPIOJ_AFRH                0x0



/* PORTK:
*/

#define VAL_GPIOK_MODER               0x0
#define VAL_GPIOK_OTYPER              0x0
#define VAL_GPIOK_OSPEEDR             0x0
#define VAL_GPIOK_PUPDR               0x0
#define VAL_GPIOK_ODR                 0x0
#define VAL_GPIOK_AFRL                0x0
#define VAL_GPIOK_AFRH                0x0



