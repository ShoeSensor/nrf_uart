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

#include "nrf_uartDriver.h"

#include "app_uart.h"
#include "app_error.h"
#include "nrf_drv_uart.h"
#include "nrf_delay.h"
#include "nrf.h"
#include "bsp.h"

void uart_init()
{
    uint32_t errCode;
    errCode = nrf_drv_uart_init(NULL, NULL);
    APP_ERROR_CHECK(errCode);
}

void uart_read(char *data, uint8_t length)
{
    uint32_t errCode;
    errCode = nrf_drv_uart_rx((uint8_t *)data, length);
    APP_ERROR_CHECK(errCode);
}

void uart_write(char *data, uint8_t length)
{
    uint32_t errCode;
    errCode = nrf_drv_uart_tx((uint8_t *)data, length);
    APP_ERROR_CHECK(errCode);
}
