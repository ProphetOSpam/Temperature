/*
 * print.h
 *
 *  Created on: Aug 6, 2025
 *      Author: MRT_Engineering
 */

#ifndef SRC_PRINT_H_
#define SRC_PRINT_H_

#include "stm32f4xx_hal.h"

#ifndef PRINT_BUFF_SIZE
#define PRINT_BUFF_SIZE 256
#endif

#ifndef PRINT_HAL_UART_TIMEOUT
#define PRINT_HAL_UART_TIMEOUT 1000
#endif

extern UART_HandleTypeDef huart1;

void print(char *str, ...);

#define println(str, ...) do { \
	print(str, ## __VA_ARGS__); \
	char newline = '\n';  \
	HAL_UART_Transmit(&huart1, (uint8_t *) &newline, 1, PRINT_HAL_UART_TIMEOUT); \
} while (0)

void print_binary(uint16_t num);

void print_binary_pretty(uint16_t num);


#endif /* SRC_PRINT_H_ */
