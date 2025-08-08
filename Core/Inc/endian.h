/*
 * endian.h
 *
 *  Created on: Aug 6, 2025
 *      Author: MRT_Engineering
 */

#ifndef INC_ENDIAN_H_
#define INC_ENDIAN_H_

#include <stddef.h>

// Modifies data structure in place to become little endian
void swpend(void *vdata, size_t size);

#endif /* INC_ENDIAN_H_ */
