/***********************************************************************************
 *File Name  : DIO_source.h
 *Description: Source file for DIO Module for AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/
#include "DIO_confg.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "STD_types.h"
#include "common_macros.h"

/*
 * Description :
 * Setup the direction of the required pin input/output.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
void DIO_setupPinDirection(DIO_PortNo PORT_ID, DIO_PinNo PIN_ID, DIO_Direction pinDirection)
{
	if ((PORT_ID >= NUM_OF_PORTS) || (PIN_ID >= NUM_OF_PINS))
	{
		/*Do nothing*/
	}

	else{

		switch (PORT_ID)
		{
		case PORTA_ID:
			if (pinDirection == INPUT)
			{
				CLR_BIT(DDRA_REG, PIN_ID);
			}
			else if (pinDirection == OUTPUT)
			{
				SET_BIT(DDRA_REG, PIN_ID);
			}
			break;
		case PORTB_ID:
			if (pinDirection == INPUT)
			{
				CLR_BIT(DDRB_REG, PIN_ID);
			}
			else if (pinDirection == OUTPUT)
			{
				SET_BIT(DDRB_REG, PIN_ID);
			}
			break;
		case PORTC_ID:
			if (pinDirection == INPUT)
			{
				CLR_BIT(DDRC_REG, PIN_ID);
			}
			else if (pinDirection == OUTPUT)
			{
				SET_BIT(DDRC_REG, PIN_ID);
			}
			break;
		case PORTD_ID:
			if (pinDirection == INPUT)
			{
				CLR_BIT(DDRD_REG, PIN_ID);
			}
			else if (pinDirection == OUTPUT)
			{
				SET_BIT(DDRD_REG, PIN_ID);
			}
			break;
		}
	}
}

/*
 * Description :
 * Setup the direction of the required port all pins input/output.
 * If the direction value is PORT_INPUT all pins in this port should be input pins.
 * If the direction value is PORT_OUTPUT all pins in this port should be output pins.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_setupPortDirection(DIO_PortNo PORT_ID, DIO_Direction portDirection)
{
	if (PORT_ID >= NUM_OF_PORTS)
	{
		/*Do nothing*/
	}

	else{

		switch (PORT_ID)
		{
		case PORTA_ID:
			if (portDirection == INPUT)
			{
				DDRA_REG = 0x00;
			}
			else if (portDirection == OUTPUT)
			{
				DDRA_REG = 0xFF;
			}
			break;
		case PORTB_ID:
			if (portDirection == INPUT)
			{
				DDRB_REG = 0x00;
			}
			else if (portDirection == OUTPUT)
			{
				DDRB_REG = 0xFF;
			}
			break;
		case PORTC_ID:
			if (portDirection == INPUT)
			{
				DDRC_REG = 0x00;
			}
			else if (portDirection == OUTPUT)
			{
				DDRC_REG = 0xFF;
			}
			break;
		case PORTD_ID:
			if (portDirection == INPUT)
			{
				DDRD_REG = 0x00;
			}
			else if (portDirection == OUTPUT)
			{
				DDRB_REG = 0xFF;
			}
			break;
		}
	}
}

/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request.
 * If the pin is input, this function will enable/disable the internal pull-up resistor.
 */
void DIO_writePin(DIO_PortNo PORT_ID, DIO_PinNo PIN_ID, u8 pinLogic)
{
	if ((PORT_ID >= NUM_OF_PORTS) || (PIN_ID >= NUM_OF_PINS))
	{
		/*Do nothing*/
	}
	else{

		switch (PORT_ID)
		{
		case PORTA_ID:
			if (pinLogic == LOGIC_LOW)
			{
				CLR_BIT(PORTA_REG, PIN_ID);
			}
			else if (pinLogic == LOGIC_HIGH)
			{
				SET_BIT(PORTA_REG, PIN_ID);
			}
			break;
		case PORTB_ID:
			if (pinLogic == LOGIC_LOW)
			{
				CLR_BIT(PORTB_REG, PIN_ID);
			}
			else if (pinLogic == LOGIC_HIGH)
			{
				SET_BIT(PORTB_REG, PIN_ID);
			}
			break;
		case PORTC_ID:
			if (pinLogic == LOGIC_LOW)
			{
				CLR_BIT(PORTC_REG, PIN_ID);
			}
			else if (pinLogic == LOGIC_HIGH)
			{
				SET_BIT(PORTC_REG, PIN_ID);
			}
			break;
		case PORTD_ID:
			if (pinLogic == LOGIC_LOW)
			{
				CLR_BIT(PORTD_REG, PIN_ID);
			}
			else if (pinLogic == LOGIC_HIGH)
			{
				SET_BIT(PORTD_REG, PIN_ID);
			}
			break;
		}
	}
}

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If any pin in the port is input pin this will activate/deactivate the internal pull-up resistor.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_writePort (DIO_PortNo PORT_ID, u8 portLogic)
{
	if (PORT_ID >= NUM_OF_PORTS)
	{
		/*Do nothing*/
	}
	else{

		switch (PORT_ID)
		{
		case PORTA_ID:
			if (portLogic == LOGIC_LOW)
			{
				PORTA_REG = 0x00;
			}
			else if (portLogic == LOGIC_HIGH)
			{
				PORTA_REG = 0xFF;
			}
			break;
		case PORTB_ID:
			if (portLogic == LOGIC_LOW)
			{
				PORTB_REG = 0x00;
			}
			else if (portLogic == LOGIC_HIGH)
			{
				PORTB_REG = 0xFF;
			}
			break;
		case PORTC_ID:
			if (portLogic == LOGIC_LOW)
			{
				PORTC_REG = 0x00;
			}
			else if (portLogic == LOGIC_HIGH)
			{
				PORTC_REG = 0xFF;
			}
			break;
		case PORTD_ID:
			if (portLogic == LOGIC_LOW)
			{
				PORTD_REG = 0x00;
			}
			else if (portLogic == LOGIC_HIGH)
			{
				PORTD_REG = 0xFF;
			}
			break;
		}
	}
}

/*
 * Description :
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 * If the input port number or pin number are not correct, The function will return Logic Low.
 */
u8 DIO_readPin (DIO_PortNo PORT_ID, DIO_PinNo PIN_ID)
{
	u8 bit = 0;
	if ((PORT_ID >= NUM_OF_PORTS) || (PIN_ID >= NUM_OF_PINS))
	{
		/*Do nothing*/
	}
	else{
		switch (PORT_ID)
		{
		case PORTA_ID:
			bit = GET_BIT(PINA_REG, PIN_ID);
			break;
		case PORTB_ID:
			bit = GET_BIT(PINB_REG, PIN_ID);
			break;
		case PORTC_ID:
			bit = GET_BIT(PINC_REG, PIN_ID);
			break;
		case PORTD_ID:
			bit = GET_BIT(PIND_REG, PIN_ID);
			break;
		}
	}
	return bit;
}

/*
 * Description :
 * Read and return the value of the required port.
 * If the input port number is not correct, The function will return ZERO value.
 */
u8 DIO_readPort (DIO_PortNo PORT_ID)
{
	u8 bits = 0;
	if (PORT_ID >= NUM_OF_PORTS)
	{
		/*Do nothing*/
	}
	else{
		switch (PORT_ID)
		{
		case PORTA_ID:
			bits = PINA_REG;
			break;
		case PORTB_ID:
			bits = PINB_REG;
			break;
		case PORTC_ID:
			bits = PINC_REG;
			break;
		case PORTD_ID:
			bits = PIND_REG;
			break;
		}
	}
	return bits;
}

/*
 * Description :
 * Setup the direction of the required pin input then write on port register logic high.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
void DIO_setPullUpPin(DIO_PortNo PORT_ID, DIO_PinNo PIN_ID)
{
	if ((PORT_ID >= NUM_OF_PORTS) || (PIN_ID >= NUM_OF_PINS))
	{
		/*Do nothing*/
	}
	else{
		switch (PORT_ID)
		{
		case PORTA_ID:
			CLR_BIT(DDRA_REG, PIN_ID);
			SET_BIT(PORTA_ID, PIN_ID);
			break;
		case PORTB_ID:
			CLR_BIT(DDRB_REG, PIN_ID);
			SET_BIT(PORTB_ID, PIN_ID);
			break;
		case PORTC_ID:
			CLR_BIT(DDRC_REG, PIN_ID);
			SET_BIT(PORTC_ID, PIN_ID);
			break;
		case PORTD_ID:
			CLR_BIT(DDRD_REG, PIN_ID);
			SET_BIT(PORTD_ID, PIN_ID);
			break;
		}
	}
}

/*
 * Description :
 * funtion to disable all pull up resistors even if it is allowed through pins registers
 * If it is disabled so all pull up resistors are disabled
 */
void DIO_disableGeneralPullUp (void)
{
	SET_BIT(SFIOR_REG, PUD);
}

/*
 * Description:
 * Function to allow enabling pull up resistors at pins if needed
 */
void DIO_enableGeneralPullUp (void)
{
	CLR_BIT(SFIOR_REG, PUD);
}
