/*
 * DIO_INTERFACE.h
 *
 *  Created on: Jul 18, 2022
 *      Author: MICROSOFT
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define DIO_U8_OUTPUT 1
#define DIO_U8_INPUT 0
#define DIO_U8_HIGH 1
#define DIO_U8_LOW 0

void DIO_SetPinDirection(u8 copy_u8PortID, u8 copy_u8PinD, u8 copy_u8PinDir);
void DIO_SetPinValu(u8 copy_u8PortID, u8 copy_u8PinD, u8 copy_u8PinValu);
void DIO_u8_setPortDir(u8 DIO_u8PortId,u8 DIO_PortDir);
void DIO_u8_setPortVal(u8 DIO_u8PortId,u8 DIO_PortDir);
#endif /* DIO_INTERFACE_H_ */
