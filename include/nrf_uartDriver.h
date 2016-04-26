/*
 * Copyright 2016 Nils van Mulekom.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** @file
 * @defgroup uart UART Device Driver
 * @{
 * @ingroup dd
 *
 * @brief UART driver abstraction layer.
 *
 */



#ifndef CONFIG_NRF_UARTDRIVER_H_
#define CONFIG_NRF_UARTDRIVER_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief initialises uart in default configuration and
 *        without an event handler.
 */
void uart_init(void);

/**
 * @brief reads the data received via uart.
 * @param pointer to the data to be read.
 * @param length number of bytes to receive.
 */
void uart_read(char *data, uint8_t length);

/**
 * @brief sends data via uart.
 * @param pointer to the data to be sent.
 * @param length number of bytes to send.
 */
void uart_write(char *data, uint8_t length);

#endif /* CONFIG_NRF_UARTDRIVER_H_ */

