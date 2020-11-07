us_ticker.c
serial_device.c
pin_device.h

custom_targets.json
{
    "FAMILY_USER_STM32": {
        "inherits": ["Target"],
        "public": false,
        "extra_labels": ["USER_STM"],
        "supported_toolchains": ["ARM", "uARM", "IAR", "GCC_ARM"],
        "macros": [
            "USE_HAL_DRIVER",
            "USE_FULL_LL_DRIVER",
            "TRANSACTION_QUEUE_SIZE_SPI=2"
        ],
        "config": {
            "lse_available": {
                "help": "Define if a Low Speed External xtal (LSE) is available on the board (0 = No, 1 = Yes). If Yes, the LSE will be used to clock the RTC, LPUART, ... otherwise the Low Speed Internal clock (LSI) will be used",
                "value": "1"
            },
            "lpuart_clock_source": {
                "help": "Define the LPUART clock source. Mask values: USE_LPUART_CLK_LSE, USE_LPUART_CLK_PCLK1, USE_LPUART_CLK_HSI",
                "value": "USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1"
            },
            "stdio_uart_tx": {
                "help": "default TX STDIO pins is defined in PinNames.h file, but it can be overridden"
            },
            "stdio_uart_rx": {
                "help": "default RX STDIO pins is defined in PinNames.h file, but it can be overridden"
            },
            "lpticker_delay_ticks": {
                "help": "https://os.mbed.com/docs/latest/porting/low-power-ticker.html",
                "value": 1,
                "macro_name": "LPTICKER_DELAY_TICKS"
            },
            "lpticker_lptim_clock": {
                "help": "Default value for LPTIM clock (lpticker_lptim == 1). Value is the dividing factor. Choose 1, 2 or 4",
                "value": 1
            }
        },
        "overrides": {
            "deep-sleep-latency": 4,
            "init-us-ticker-at-boot": true
        },
        "device_has": [
            "USTICKER",
            "LPTICKER",
            "RTC",
            "ANALOGIN",
            "I2C",
            "I2CSLAVE",
            "I2C_ASYNCH",
            "INTERRUPTIN",
            "PORTIN",
            "PORTINOUT",
            "PORTOUT",
            "PWMOUT",
            "SERIAL",
            "SERIAL_FC",
            "SLEEP",
            "SPI",
            "SPISLAVE",
            "SPI_ASYNCH",
            "STDIO_MESSAGES",
            "WATCHDOG",
            "RESET_REASON"
        ]
    },
    "NUCLEO_JD3423": {
        "inherits": ["FAMILY_USER_STM32"],
        "supported_form_factors": ["ARDUINO", "MORPHO"],
        "core": "Cortex-M3",
        "extra_labels_add": ["STM32F1", "STM32F103VE"],
        "config": {
            "clock_source": {
                "help": "Mask value : USE_PLL_HSE_EXTC (SYSCLK=72 MHz) | USE_PLL_HSE_XTAL (need HW patch) | USE_PLL_HSI (SYSCLK=64 MHz)",
                "value": "USE_PLL_HSE_EXTC|USE_PLL_HSI",
                "macro_name": "CLOCK_SOURCE"
            }
        },
        "detect_code": ["0700"],
		"components_add": ["FLASHIAP"],
        "device_has_add": [
            "CAN",
            "SERIAL_ASYNCH",
            "FLASH"
        ],
        "macros": [
            "INITIAL_SP=(0x20010000UL)"
        ],
		"bootloader_supported": true,
		"device_has_remove": ["LPTICKER"],
        "release_versions": ["2", "5"],
        "device_name": "STM32F103VE"
    },
	"NUCLEO_WS3423": {
        "inherits": ["FAMILY_USER_STM32"],
        "supported_form_factors": ["ARDUINO", "MORPHO"],
        "core": "Cortex-M3",
        "extra_labels_add": ["STM32F1", "STM32F103VE"],
        "config": {
            "clock_source": {
                "help": "Mask value : USE_PLL_HSE_EXTC (SYSCLK=72 MHz) | USE_PLL_HSE_XTAL (need HW patch) | USE_PLL_HSI (SYSCLK=64 MHz)",
                "value": "USE_PLL_HSE_EXTC|USE_PLL_HSI",
                "macro_name": "CLOCK_SOURCE"
            }
        },
        "detect_code": ["0700"],
		"components_add": ["FLASHIAP"],
        "device_has_add": [
            "CAN",
            "SERIAL_ASYNCH",
            "FLASH"
        ],
        "macros": [
            "INITIAL_SP=(0x20020000UL)"
        ],
		"bootloader_supported": true,
		"device_has_remove": ["LPTICKER"],
        "release_versions": ["2", "5"],
        "device_name": "STM32F103VE"
    }
}