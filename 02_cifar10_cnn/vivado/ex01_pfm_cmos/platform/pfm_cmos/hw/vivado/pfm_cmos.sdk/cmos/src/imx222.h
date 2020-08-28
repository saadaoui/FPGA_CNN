/*
 * imx222.h
 *
 *  Created on: 2016��3��15��
 *      Author: clevo
 */

#ifndef IMX222_H_
#define IMX222_H_
#include "xstatus.h"
#include "xspips.h"

#define IMX122_CHIP_ID1 02
#define IMX122_OUT_FS 15
#define IMX122_OUT_MODE	1080
XSpiPs* InstancePtr;
typedef struct {
	u8 CHIP_ID;
	u8 ADDR;
	u8 value;
}__attribute__((packed)) SPI_CONFIG;
int initialIMX122(XSpiPs* InstancePtr);
#endif /* IMX222_H_ */
