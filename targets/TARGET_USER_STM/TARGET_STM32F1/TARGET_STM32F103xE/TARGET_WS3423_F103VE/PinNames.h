/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PA_0  = 0x00,
    PA_1  = 0x01,
    PA_2  = 0x02,
    PA_3  = 0x03,
    PA_4  = 0x04,
    PA_5  = 0x05,
    PA_6  = 0x06,
    PA_7  = 0x07,
    PA_8  = 0x08,
    PA_9  = 0x09,
    PA_10 = 0x0A,
    PA_11 = 0x0B,
    PA_12 = 0x0C,
    PA_13 = 0x0D,
    PA_14 = 0x0E,
    PA_15 = 0x0F,

    PB_0  = 0x10,
    PB_1  = 0x11,
    PB_2  = 0x12,
    PB_3  = 0x13,
    PB_4  = 0x14,
    PB_5  = 0x15,
    PB_6  = 0x16,
    PB_7  = 0x17,
    PB_8  = 0x18,
    PB_9  = 0x19,
    PB_10 = 0x1A,
    PB_11 = 0x1B,
    PB_12 = 0x1C,
    PB_13 = 0x1D,
    PB_14 = 0x1E,
    PB_15 = 0x1F,

    PC_0  = 0x20,
    PC_1  = 0x21,
    PC_2  = 0x22,
    PC_3  = 0x23,
    PC_4  = 0x24,
    PC_5  = 0x25,
    PC_6  = 0x26,
    PC_7  = 0x27,
    PC_8  = 0x28,
    PC_9  = 0x29,
    PC_10 = 0x2A,
    PC_11 = 0x2B,
    PC_12 = 0x2C,
    PC_13 = 0x2D,
    PC_14 = 0x2E,
    PC_15 = 0x2F,

    PD_0  = 0x30,
    PD_1  = 0x31,
    PD_2  = 0x32,
    PD_3  = 0x33,
    PD_4  = 0x34,
    PD_5  = 0x35,
    PD_6  = 0x36,
    PD_7  = 0x37,
    PD_8  = 0x38,
    PD_9  = 0x39,
    PD_10 = 0x3A,
    PD_11 = 0x3B,
    PD_12 = 0x3C,
    PD_13 = 0x3D,
    PD_14 = 0x3E,
    PD_15 = 0x3F,

    PE_0  = 0x40,
    PE_1  = 0x41,
    PE_2  = 0x42,
    PE_3  = 0x43,
    PE_4  = 0x44,
    PE_5  = 0x45,
    PE_6  = 0x46,
    PE_7  = 0x47,
    PE_8  = 0x48,
    PE_9  = 0x49,
    PE_10 = 0x4A,
    PE_11 = 0x4B,
    PE_12 = 0x4C,
    PE_13 = 0x4D,
    PE_14 = 0x4E,
    PE_15 = 0x4F,
	
    // ADC internal channels
    ADC_TEMP = 0xF0,
    ADC_VREF = 0xF1,

    // Arduino connector namings
    A0          = PA_0,
    A1          = PA_1,
    A2          = PA_4,
    A3          = PB_0,
    A4          = PC_1,
    A5          = PC_0,
    D0          = PA_3,
    D1          = PA_2,
    D2          = PA_10,
    D3          = PB_3,
    D4          = PB_5,
    D5          = PB_4,
    D6          = PB_10,
    D7          = PA_8,
    D8          = PA_9,
    D9          = PC_7,
    D10         = PB_6,
    D11         = PA_7,
    D12         = PA_6,
    D13         = PA_5,
    D14         = PB_9,
    D15         = PB_8,

	MSW1			= PE_6,
	MSW2			= PD_4,
	MSW3			= PC_5,
	MSW4			= PB_6,
	MSW5			= PB_7,
	MSW6			= PE_0,
	
	DI1			= PB_10,
	DI2			= PE_14,
	DI3			= PE_12,
	DI4			= PE_10,
	DI5			= PE_8,
	DI6			= PB_2,
	DI7			= PB_0,
	DI8			= PD_11,
	DI9			= PE_15,
	DI10		= PE_13,
	DI11		= PE_11,
	DI12		= PE_9,
	DI13		= PE_7,
	DI14		= PB_1,
	DI15		= PA_12,
	DI16		= PA_11,
	
	DO1        = PC_3,
	DO2        = PC_2,
	DO3        = PC_1,
	DO4        = PC_0,
	
	PWM_R      = PA_2,//TIM5_CH3
	PWM_G      = PA_1,//TIM5_CH2
	PWM_B      = PA_0,//TIM5_CH1
	PWM_W      = PA_3,//TIM5_CH4
	
	MOS_PWM      = PB_11, //TIM2_CH4
	MOS_EN      = PE_5,
	
	DRV_PWM1  = PD_12,//TIM2_CH1
	DRV_PWM2  = PD_13,//TIM2_CH2
	DRV_PWM3  = PD_14,//TIM2_CH3
	DRV_PWM4  = PD_15,//TIM2_CH4
	DRV_PWM5  = PC_6,//TIM3_CH1
	DRV_PWM6  = PC_7,//TIM3_CH2
	
	DRV_FAULT1  = PA_4,
	DRV_FAULT2  = PE_2,
	
	DRV_RST1  = PA_5,
	DRV_RST2  = PE_3,
	
	DRV_EN1  = PA_7,
	DRV_EN2  = PA_6,
	DRV_EN3  = PE_4,
	
    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    STDIO_UART_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    STDIO_UART_TX = PC_12,//UART5
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    STDIO_UART_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    STDIO_UART_RX = PD_2,//UART5
#endif

    // Generic signals namings
    LED1        = PD_10,
    LED2        = PD_10,
    LED3        = PD_10,
    LED4        = PD_10,
    USER_BUTTON = PC_13,
    // Standardized button names
    BUTTON1 = USER_BUTTON,
    SERIAL_TX   = STDIO_UART_TX,
    SERIAL_RX   = STDIO_UART_RX,
    USBTX       = STDIO_UART_TX,
    USBRX       = STDIO_UART_RX,
	
	RS485_TX       = PA_9,//UART1
    RS485_RX       = PA_10,
	RS485_EN       = PA_15,
	
	PAY_TX       = PD_5,//UART2
    PAY_RX       = PD_6,
	
	MP3_TX       = PC_10,//UART3
    MP3_RX       = PC_11,
	
	MP3_EN       = PD_3,
	
    I2C_SCL     = PB_8,
    I2C_SDA     = PB_9,
	
	//SPI1
    SPI_MOSI    = PA_7,
    SPI_MISO    = PA_6,
    SPI_SCK     = PA_5,
    SPI_CS      = PA_4,
	
	//SPI2
    LCD_SPI_MOSI    = PB_15,
    LCD_SPI_MISO    = PB_14,
    LCD_SPI_SCK     = PB_13,
    LCD_SPI_CS      = PB_12,
	LCD_RST      = PD_8,
	LCD_BACKLIGHT      = PD_9,
	
	//SPI3
	SPIF_MOSI    = PB_5,
    SPIF_MISO    = PB_4,
    SPIF_SCK     = PB_3,
    SPIF_CS      = PB_8,
	
	MBI_LAT   = PA_8,
    MBI_DAT   = PE_1,
    MBI_CLK   = PD_7,
	
	
    PWM_OUT     = PB_11,

	CAN_TX = PD_1,
    CAN_RX = PD_0,
    /**** USB pins ****/
    USB_DM = PA_11,
    USB_DP = PA_12,

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN = PC_14,
    RCC_OSC32_OUT = PC_15,
    RCC_OSC_IN = PD_0,
    RCC_OSC_OUT = PD_1,

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK = PA_14,
    SYS_JTDI = PA_15,
    SYS_JTDO_TRACESWO = PB_3,
    SYS_JTMS_SWDIO = PA_13,
    SYS_NJTRST = PB_4,
    SYS_WKUP = PA_0,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
