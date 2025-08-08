/*
 * endian.c
 *
 *  Created on: Aug 6, 2025
 *      Author: MRT_Engineering
 */

#include "endian.h"

#include "cmsis_gcc.h"


// Swaps endianness of 16 bit sized entries of data
void swpend(uint16_t *data, size_t size) {
//	uint32_t *data32 = (uint32_t *) data;
//	uint32_t bullshit;

	for (int i = 0; i < size ; i++) {
		data[i] = __REV16(data[i]);
	}

	// Odd number of uint16_t, one left
//	if (size % 2 == 1) {
	//	data[size - 1] = __REVSH(data[size - 1]);
//	}
}

//
//void swpend(void *vdata, size_t size) {
//	uint8_t *data = (uint8_t *) vdata;
//	for (int i = 0; i < size / 2; i++) {
//		uint8_t *first = data + i;
//		uint8_t *last = data + (size - 1) - i;
//
//		uint8_t tmp = *first;
//		*first = *last;
//		*last = tmp;
//	}
//}
