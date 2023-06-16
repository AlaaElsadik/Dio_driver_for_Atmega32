/*
 * DIO_PROGRAMC.C
 *
 *  Created on: Jul 18, 2022
 *      Author: MICROSOFT
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_INTERFACE.h"
#include "Register.h"

void  DIO_SetPinDirection(u8 copy_u8PortID, u8 copy_u8PinD, u8 copy_u8PinDir) {


	switch(copy_u8PortID)
	{
		case PORTA:
			if( copy_u8PinDir == DIO_U8_OUTPUT)
			{
				SET_BIT(DIO_u8_DDRA_REG,copy_u8PinD);
			}
			else
			{
				CLR_BIT(DIO_u8_DDRA_REG,copy_u8PinD);
			}
       break;

		case PORTB:
				if( copy_u8PinDir == DIO_U8_OUTPUT){
					SET_BIT(DIO_u8_DDRB_REG,copy_u8PinD);}
				else{
					CLR_BIT(DIO_u8_DDRB_REG,copy_u8PinD);}
		       break;

		case PORTC:
				if( copy_u8PinDir == DIO_U8_OUTPUT){
					SET_BIT(DIO_u8_DDRC_REG,copy_u8PinD);}
				else{
					CLR_BIT(DIO_u8_DDRC_REG,copy_u8PinD);}
		       break;

		case PORTD:
				if( copy_u8PinDir == DIO_U8_OUTPUT){
					SET_BIT(DIO_u8_DDRD_REG,copy_u8PinD);}
				else{
					CLR_BIT(DIO_u8_DDRD_REG,copy_u8PinD);}
		       break;
	}

}

void DIO_SetPinValu(u8 copy_u8PortID, u8 copy_u8PinD, u8 copy_u8PinValu)
{

		switch(copy_u8PortID)
		{
			case PORTA :
			if( copy_u8PinValu == DIO_U8_HIGH)
			{
				SET_BIT(DIO_u8_PINA_REG,copy_u8PinD);
			}
			else
			{
				CLR_BIT(DIO_u8_PINA_REG,copy_u8PinD);
			}
	       break;

			case PORTB :
					if( copy_u8PinValu == DIO_U8_HIGH)
					{
						SET_BIT(DIO_u8_PINB_REG,copy_u8PinD);
					}
					else
					{
						CLR_BIT(DIO_u8_PINB_REG,copy_u8PinD);
					}
			       break;

			case PORTC :
					if( copy_u8PinValu == DIO_U8_HIGH){
						SET_BIT(DIO_u8_PINC_REG,copy_u8PinD);}
					else{
						CLR_BIT(DIO_u8_PINC_REG,copy_u8PinD);}
			       break;

			case PORTD :
					if( copy_u8PinValu == DIO_U8_HIGH)
					{
						SET_BIT(DIO_u8_PIND_REG,copy_u8PinD);
					}
					else
					{
						CLR_BIT(DIO_u8_PIND_REG,copy_u8PinD);
					}
			       break;
		}

}
void DIO_u8_setPortDir (u8 DIO_u8PortId,u8 DIO_PortDir){
switch(u8 DIO_u8PortId){
case PORTA : DIO_u8_DDRA_REG = DIO_PortDir; break;
case PORTB : DIO_u8_DDRB_REG = DIO_PortDir; break;
case PORTC : DIO_u8_DDRC_REG = DIO_PortDir; break;
case PORTD : DIO_u8_DDRD_REG = DIO_PortDir; break;
}
}
void DIO_u8_setPortVal(u8 DIO_u8PortId,u8 DIO_PortVal){
switch(u8 DIO_u8PortId){
case PORTA : DIO_u8_DDRA_REG = DIO_PortVal; break;
case PORTB : DIO_u8_DDRB_REG = DIO_PortVal; break;
case PORTC : DIO_u8_DDRC_REG = DIO_PortVal; break;
case PORTD : DIO_u8_DDRD_REG = DIO_PortVal; break;
}
}





