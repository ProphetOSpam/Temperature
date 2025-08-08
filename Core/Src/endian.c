/*
 * endian.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MRT_Engineering
 */

#include "endian.h"

#include <stdint.h>

void swpend(void *vdata, size_t size) {
	uint8_t *data = (uint8_t *) vdata;
	for (int i = 0; i < size / 2; i++) {
		uint8_t *first = data + i;
		uint8_t *last = data + (size - 1) - i;

		uint8_t tmp = *first;
		*first = *last;
		*last = tmp;
	}
}
