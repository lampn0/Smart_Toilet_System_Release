/*
 * oled.h
 *
 *  Created on: June 19, 2022
 *      Author: thinv0
 */

#ifndef SRC_OLED_H_
#define SRC_OLED_H_

#include<xil_types.h>

typedef struct oledControl{
	u32 baseAddress;
}oledControl;

int initOled(oledControl *myOled,u32 baseAddress);
void writeCharOled(oledControl *myOled,char myChar);
void printOled(oledControl *myOled,char *myString);
void clearOled(oledControl *myOled);


#endif /* SRC_OLED_H_ */
