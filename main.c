/*
 * main.c
 *
 *  Created on: May 11, 2019
 *      Author: Abdelrhman
 */
#include "avr/delay.h"

void main()
{
	/*Set Pin A0 to be Output Pin*/
	DIO_vidSetPinDir(0, 0, 1);
	/*Set Pin A1 to be Output Pin*/
	DIO_vidSetPinDir(0, 1, 1);
	/*Set Pin B0 to be Input Pin*/
	DIO_vidSetPinDir(1, 0, 0);
	/*Activate B0 Internal Pullup*/
	DIO_vidSetPinVal(1, 0, 1);


	while(1)
   {
	/*Set Pin A0 to High*/
	DIO_vidSetPinVal(0, 0, 1);


	/*check for switch pressing on B0*/
	if (DIO_u8GetPinVal(1, 0) == 0)
	{
		DIO_vidSetPinVal(0, 1, 1);
		_delay_ms(500);
		DIO_vidSetPinVal(0, 1, 0);
		_delay_ms(500);

	}
   }
}
