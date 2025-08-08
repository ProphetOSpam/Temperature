/*
 * print.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MRT_Engineering
 */

#include "print.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print(char *str, ...) {
	for (int i = 0; i < strlen(str); i += PRINT_BUFF_SIZE) {
		char buf[PRINT_BUFF_SIZE] = {0};
		va_list args;
		va_start(args, str);
		vsnprintf(buf, PRINT_BUFF_SIZE, str, args);
		va_end (args);

		HAL_UART_Transmit(&huart1, (uint8_t *) buf, PRINT_BUFF_SIZE, PRINT_HAL_UART_TIMEOUT);
	}
}


void print_binary(uint16_t num) {
	for (uint16_t i = 0; i < 16; i++) {
		uint16_t mask = 1 << i;
		if (num & mask) {
			print("1 ");
		} else {
			print("0 ");
		}
	}
	print("\n");
}

void print_binary_pretty(uint16_t num) {
	println("0 1 2 3 4 5 6 7 8 9 a b c d e f");
	print_binary(num);
	print("\n");
}
