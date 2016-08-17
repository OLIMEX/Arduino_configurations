/************************************************************************/
/*  																	*/
/*	Board_Data.c --	Default Board Customization Data Declarations		*/
/*																		*/
/************************************************************************/
/*	Author: Gene Apperson												*/
/*	Copyright 2011, Digilent. All rights reserved						*/
/************************************************************************/
/*  File Description:													*/
/*																		*/
/* This file contains the board specific declartions and data structure	*/
/* to customize the chipKIT MPIDE for use with a generic board using a	*/
/* PIC32 part in a 64-pin package.										*/
/*																		*/
/* This code is based on earlier work:									*/
/*		Copyright (c) 2010, 2011 by Mark Sproul							*/
/*		Copyright (c) 2005, 2006 by David A. Mellis						*/
/*																		*/
/************************************************************************/
/*  Revision History:													*/
/*																		*/
/*	11/28/2011(GeneA): Created by splitting data out of Board_Defs.h	*/
/*  03/11/2012(BrianS): Modified for Fubarino board                     */
/*	02/12/2013(GeneA): removed dependency on Microchip plib library		*/
/*  20/05/2013(): Modified for Olimex Pinguino32 board					*/
/*  03/12/2013(SPP): Modified for Olimex DuinoMite Mega board			*/
/*																		*/
/************************************************************************/
//*	This library is free software; you can redistribute it and/or
//*	modify it under the terms of the GNU Lesser General Public
//*	License as published by the Free Software Foundation; either
//*	version 2.1 of the License, or (at your option) any later version.
//*	
//*	This library is distributed in the hope that it will be useful,
//*	but WITHOUT ANY WARRANTY; without even the implied warranty of
//*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//*	Lesser General Public License for more details.
//*	
//*	You should have received a copy of the GNU Lesser General
//*	Public License along with this library; if not, write to the
//*	Free Software Foundation, Inc., 59 Temple Place, Suite 330,
//*	Boston, MA  02111-1307  USA
/************************************************************************/

#if !defined(BOARD_DATA_C)
#define BOARD_DATA_C

#include <inttypes.h>

/* ------------------------------------------------------------ */
/*					Data Tables									*/
/* ------------------------------------------------------------ */
/* The following declarations define data used in pin mapping.	*/
/* ------------------------------------------------------------ */

#if defined(OPT_BOARD_DATA)

/* ------------------------------------------------------------ */
/* This table is used to map from port number to the address of
** the TRIS register for the port. This is used for setting the
** pin direction.
*/
const uint32_t	port_to_tris_PGM[] = {
	NOT_A_PORT,				//index value 0 is not used

#if defined(_PORTA)
	(uint32_t)&TRISA,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTB)
	(uint32_t)&TRISB,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTC)
	(uint32_t)&TRISC,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTD)
	(uint32_t)&TRISD,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTE)
	(uint32_t)&TRISE,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTF)
	(uint32_t)&TRISF,
#else
	NOT_A_PORT,
#endif

#if defined(_PORTG)
	(uint32_t)&TRISG,
#else
	NOT_A_PORT,
#endif

	NOT_A_PORT,
};

/* ------------------------------------------------------------ */
/* This table is used to map the digital pin number to the port
** containing that pin. The default mapping is to assign pin numbers
** for every possible port bit in order from PORTA to PORTG.
*/
const uint8_t	digital_pin_to_port_PGM[] = {
	// Arduino extension digital
	_IOPORT_PE, 	// RE0, 0
	_IOPORT_PE, 	// RE1, 1
	_IOPORT_PE, 	// RE2, 2
	_IOPORT_PE, 	// RE3, 3 
	_IOPORT_PE,  	// RE4, 4
	_IOPORT_PE,  	// RE5, 5
	_IOPORT_PE,  	// RE6, 6
	_IOPORT_PE, 	// RE7, 7
	_IOPORT_PB, 	// RB11, 8
	_IOPORT_PB, 	// RB12, 9
	_IOPORT_PD, 	// RD11, 10
	_IOPORT_PD, 	// RD3, 11
	_IOPORT_PD, 	// RD2, 12
	_IOPORT_PD, 	// RD1, 13
	
	// Arduino extension analog
	_IOPORT_PB, 	// RB3, 14
	_IOPORT_PB, 	// RB4, 15
	_IOPORT_PB, 	// RB6, 16
	_IOPORT_PB, 	// RB7, 17
	_IOPORT_PB, 	// RB9, 18
	_IOPORT_PB, 	// RB10, 19

	// UEXT
	NOT_A_PORT, 	// 3.3, 20
	NOT_A_PORT, 	// GND, 21
	_IOPORT_PF, 	// RF5, 22
	_IOPORT_PF, 	// RF4, 23
	_IOPORT_PD, 	// RD10, 24
	_IOPORT_PD, 	// RD9, 25
	_IOPORT_PD, 	// RD2, 26	
	_IOPORT_PD, 	// RD3, 27
	_IOPORT_PD, 	// RD1, 28
	_IOPORT_PB, 	// RB11, 29
	_IOPORT_PB, 	// RB15, 30
	_IOPORT_PD, 	// RD8, 31
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to a bit mask
** for the corresponding bit within the port.
*/
const uint16_t	digital_pin_to_bit_mask_PGM[] = {

	// Arduino extension digital
	_BV( 0 ), 	// RE0, 0
	_BV( 1 ), 	// RE1, 1
	_BV( 2 ), 	// RE2, 2
	_BV( 3 ), 	// RE3, 3 
	_BV( 4 ),  	// RE4, 4
	_BV( 5 ),  	// RE5, 5
	_BV( 6 ),  	// RE6, 6
	_BV( 7 ), 	// RE7, 7
	_BV( 11), 	// RB11, 8
	_BV( 12), 	// RB12, 9
	_BV( 11), 	// RD11, 10
	_BV( 3 ), 	// RD3, 11
	_BV( 2 ), 	// RD2, 12
	_BV( 1 ), 	// RD1, 13
	
	// Arduino extension analog
	_BV( 3 ), 	// RB3, 14
	_BV( 4 ), 	// RB4, 15
	_BV( 5 ), 	// RB6, 16
	_BV( 7 ), 	// RB7, 17
	_BV( 9 ), 	// RB9, 18
	_BV( 10), 	// RB10, 19

	// UEXT
	_BV( 0 ), 	// 3.3, 20
	_BV( 0 ), 	// GND, 21
	_BV( 5 ), 	// RF5, 22
	_BV( 4 ), 	// RF4, 23
	_BV( 10), 	// RD10, 24
	_BV( 9 ), 	// RD9, 25
	_BV( 2 ), 	// RD2, 26	
	_BV( 3 ), 	// RD3, 27
	_BV( 1 ), 	// RD1, 28
	_BV( 11), 	// RB11, 29
	_BV( 15), 	// RB15, 30
	_BV( 8), 	// RD8, 31
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to the output
** compare number, input capture number, and timer external clock
** input associated with that pin.
*/
const uint16_t	digital_pin_to_timer_PGM[] = {
	// Arduino extension digital
	NOT_ON_TIMER, 	// RE0, 0
	NOT_ON_TIMER, 	// RE1, 1
	NOT_ON_TIMER, 	// RE2, 2
	NOT_ON_TIMER, 	// RE3, 3 
	NOT_ON_TIMER,  	// RE4, 4
	NOT_ON_TIMER,  	// RE5, 5
	NOT_ON_TIMER,  	// RE6, 6
	NOT_ON_TIMER, 	// RE7, 7
	NOT_ON_TIMER, 	// RB11, 8
	NOT_ON_TIMER, 	// RB12, 9
	_TIMER_IC4, 	// RD11, 10
	_TIMER_OC4, 	// RD3, 11
	_TIMER_OC3, 	// RD2, 12
	_TIMER_OC2, 	// RD1, 13
	
	// Arduino extension analog
	NOT_ON_TIMER, 	// RB3, 14
	NOT_ON_TIMER, 	// RB4, 15
	NOT_ON_TIMER, 	// RB6, 16
	NOT_ON_TIMER, 	// RB7, 17
	NOT_ON_TIMER, 	// RB9, 18
	NOT_ON_TIMER, 	// RB10, 19

	// UEXT
	NOT_ON_TIMER, 	// 3.3, 20
	NOT_ON_TIMER, 	// GND, 21
	NOT_ON_TIMER, 	// RF5, 22
	NOT_ON_TIMER, 	// RF4, 23
	_TIMER_IC3, 	// RD10, 24
	_TIMER_IC2, 	// RD9, 25
	NOT_ON_TIMER, 	// RD2, 26	
	NOT_ON_TIMER, 	// RD3, 27
	NOT_ON_TIMER, 	// RD1, 28
	NOT_ON_TIMER, 	// RB11, 29
	NOT_ON_TIMER, 	// RB15, 30
	NOT_ON_TIMER, 	// RD8, 31
};

/* ------------------------------------------------------------ */
/* This table maps from a digital pin number to the corresponding
** analog pin number.
*/
//#if defined(_NOT_USED_)
const uint8_t digital_pin_to_analog_PGM[] = {
	// Arduino extension digital
	NOT_ANALOG_PIN, 	// RE0, 0
	NOT_ANALOG_PIN, 	// RE1, 1
	NOT_ANALOG_PIN, 	// RE2, 2
	NOT_ANALOG_PIN, 	// RE3, 3 
	NOT_ANALOG_PIN,  	// RE4, 4
	NOT_ANALOG_PIN,  	// RE5, 5
	NOT_ANALOG_PIN,  	// RE6, 6
	NOT_ANALOG_PIN, 	// RE7, 7
	NOT_ANALOG_PIN, 	// RB11, 8
	NOT_ANALOG_PIN, 	// RB12, 9
	NOT_ANALOG_PIN, 	// RD11, 10
	NOT_ANALOG_PIN, 	// RD3, 11
	NOT_ANALOG_PIN, 	// RD2, 12
	NOT_ANALOG_PIN, 	// RD1, 13
	
	// Arduino extension analog
	_BOARD_AN3, 	// RB3, 14
	_BOARD_AN4, 	// RB4, 15
	_BOARD_AN6, 	// RB6, 16
	_BOARD_AN7, 	// RB7, 17
	_BOARD_AN9, 	// RB9, 18
	_BOARD_AN10, 	// RB10, 19

	// UEXT
	NOT_ANALOG_PIN, 	// 3.3, 20
	NOT_ANALOG_PIN, 	// GND, 21
	NOT_ANALOG_PIN, 	// RF5, 22
	NOT_ANALOG_PIN, 	// RF4, 23
	NOT_ANALOG_PIN, 	// RD10, 24
	NOT_ANALOG_PIN, 	// RD9, 25
	NOT_ANALOG_PIN, 	// RD2, 26	
	NOT_ANALOG_PIN, 	// RD3, 27
	NOT_ANALOG_PIN, 	// RD1, 28
	NOT_ANALOG_PIN, 	// RB11, 29
	NOT_ANALOG_PIN, 	// RB15, 30
	NOT_ANALOG_PIN, 	// RD8, 31
};
//#endif

/* ------------------------------------------------------------ */
/* This table is used to map from the analog pin number to the
** actual A/D converter channel used for that pin.
** In the default case, where there is a one-to-one mapping, this
** table isn't needed as the analogInPinToChannel() macro is defined
** to provide the mapping.
*/
//#if defined(_NOT_USED_)
const uint8_t analog_pin_to_channel_PGM[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
};
//#endif

/* ------------------------------------------------------------ */
/*		Include Files for Board Customization Functions			*/
/* ------------------------------------------------------------ */


/* ------------------------------------------------------------ */
/*				Board Customization Functions					*/
/* ------------------------------------------------------------ */
/*																*/
/* The following can be used to customize the behavior of some	*/
/* of the core API functions. These provide hooks that can be	*/
/* used to extend or replace the default behavior of the core	*/
/* functions. To use one of these functions, add the desired	*/
/* code to the function skeleton below and then set the value	*/
/* of the appropriate compile switch above to 1. This will		*/
/* cause the hook function to be compiled into the build and	*/
/* to cause the code to call the hook function to be compiled	*/
/* into the appropriate core function.							*/
/*																*/
/* ------------------------------------------------------------ */
/***	_board_init
**
**	Parameters:
**		none
**
**	Return Value:
**		none
**
**	Errors:
**		none
**
**	Description:
**		This function is called from the core init() function.
**		This can be used to perform any board specific init
**		that needs to be done when the processor comes out of
**		reset and before the user sketch is run.
*/
#if	(OPT_BOARD_INIT != 0)

void _board_init(void) {

	/*	Turn off Secondary oscillator so pins can be used as GPIO
	*/
	OSCCONCLR	=	_OSCCON_SOSCEN_MASK;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_pinMode
**
**	Parameters:
**		pin		- digital pin number to configure
**		mode	- mode to which the pin should be configured
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the pinMode
**		function. It can perform any special processing needed
**		when setting the pin mode. If this function returns zero,
**		control will pass through the normal pinMode code. If
**		it returns a non-zero value the normal pinMode code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_pinMode(uint8_t pin, uint8_t mode) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_getPinMode
**
**	Parameters:
**		pin		- digital pin number
**		mode	- pointer to variable to receive mode value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the getPinMode
**		function. It can perform any special processing needed
**		when getting the pin mode. If this function returns zero,
**		control will pass through the normal getPinMode code. If
**		it returns a non-zero value the normal getPinMode code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_getPinMode(uint8_t pin, uint8_t * mode) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_digitalWrite
**
**	Parameters:
**		pin		- digital pin number
**		val		- value to write to the pin
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the digitalWrite
**		function. It can perform any special processing needed
**		in writing to the pin. If this function returns zero,
**		control will pass through the normal digitalWrite code. If
**		it returns a non-zero value the normal digitalWrite code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_digitalWrite(uint8_t pin, uint8_t val) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_digitalRead
**
**	Parameters:
**		pin		- digital pin number
**		val		- pointer to variable to receive pin value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the digitalRead
**		function. It can perform any special processing needed
**		in reading from the pin. If this function returns zero,
**		control will pass through the normal digitalRead code. If
**		it returns a non-zero value the normal digitalRead code isn't
**		executed.
*/
#if	(OPT_BOARD_DIGITAL_IO != 0)

int	_board_digitalRead(uint8_t pin, uint8_t * val) {
	
	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogRead
**
**	Parameters:
**		pin		- analog channel number
**		val		- pointer to variable to receive analog value
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogRead
**		function. It can perform any special processing needed
**		in reading from the pin. If this function returns zero,
**		control will pass through the normal analogRead code. If
**		it returns a non-zero value the normal analogRead code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int	_board_analogRead(uint8_t pin, int * val) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogReference
**
**	Parameters:
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogReference
**		function. It can perform any special processing needed
**		to set the reference voltage. If this function returns zero,
**		control will pass through the normal analogReference code. If
**		it returns a non-zero value the normal analogReference code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int	_board_analogReference(uint8_t mode) {

	return 0;

}

#endif

/* ------------------------------------------------------------ */
/***	_board_analogWrite
**
**	Parameters:
**		pin		- pin number
**		val		- analog value to write
**
**	Return Value:
**		Returns 0 if not handled, !0 if handled.
**
**	Errors:
**		none
**
**	Description:
**		This function is called at the beginning of the analogWrite
**		function. It can perform any special processing needed
**		in writing to the pin. If this function returns zero,
**		control will pass through the normal analogWrite code. If
**		it returns a non-zero value the normal analogWrite code isn't
**		executed.
*/
#if (OPT_BOARD_ANALOG_WRITE != 0)

int	_board_analogWrite(uint8_t pin, int val) {

	return 0;

}

#endif

#endif // OPT_BOARD_DATA

/* ------------------------------------------------------------ */

#endif	// BOARD_DATA_C

/************************************************************************/
