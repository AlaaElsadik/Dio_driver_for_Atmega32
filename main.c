/*
 * mai.c
 *
 *  Created on: Jul 18, 2022
 *      Author: MICROSOFT
 */
#include "STD_TYPES.h"
#include "Register.h"
#include "BIT_MATH.h"
#include "DIO_INTERFACE.h"
#include "DIO_PROGRAMC.C"

int main()
{
	 DIO_SetPinDirection( PORTA, 0, 1);
	 DIO_SetPinValu(PORTA, 0, 1);



	return 0;
}
