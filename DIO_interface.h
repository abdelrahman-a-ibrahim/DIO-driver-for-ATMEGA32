/*
 * DIO_interface.h
 *
 *  Created on: May 10, 2019
 *      Author: Abdelrhman
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/***********************************************************************************/
/*********************************Public Macros*************************************/
/***********************************************************************************/

/* PORT definitions*/
#define  DIO_PORTA	  0
#define  DIO_PORTB	  1
#define  DIO_PORTC	  2
#define  DIO_PORTD	  3

/*PINS definitions*/
#define DIO_PIN0      0
#define DIO_PIN1      1
#define DIO_PIN2      2
#define DIO_PIN3      3
#define DIO_PIN4      4
#define DIO_PIN5      5
#define DIO_PIN6      6
#define DIO_PIN7      7

/*Output states*/
#define DIO_HIGH      1
#define DIO_LOW       0

/*Direction states*/
#define DIO_INPUT     0
#define DIO_OUTPUT    1



/***********************************************************************************/
/*********************************Public Functions**********************************/
/***********************************************************************************/

/*********************************************************************/
/* Description: this function is to set pin value
 * Input      : PortId, Range: 0~255 [PORTA ~PORTD]
 *              PinId , Range: 0~255 [PIN0 ~PIN7]
 *              PinVal, Range: 0~255 [LOW HIGH]
 * Return     : void
 */


void DIO_vidSetPinVal(u8 PortId, u8 PinId, u8 PinVal);
void DIO_vidSetPinDir(u8 PortId, u8 PinId, u8 PinDir);
u8   DIO_u8GetPinVal(u8 PortId, u8 PinId);

void DIO_vidSetPortVal(u8 PortId, u8 PortVal);
void DIO_vidSetPortDir(u8 PortId, u8 PortVDir);


#endif /* DIO_INTERFACE_H_ */
