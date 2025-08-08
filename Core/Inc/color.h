/*
 * color.h
 *
 *  Created on: Aug 1, 2025
 *      Author: MRT_Engineering
 */

#ifndef INC_COLOR_H_
#define INC_COLOR_H_

#pragma pack(push, 1)
typedef struct {
	union {
		struct {
			// For endianness
			uint8_t b : 5;
			uint8_t g : 6;
			uint8_t r : 5;
		};
		uint16_t val;
	};
} RGB565;
#pragma pack(pop)

#endif /* INC_COLOR_H_ */
