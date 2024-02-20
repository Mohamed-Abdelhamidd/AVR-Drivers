/***********************************************************************************
 *File Name  : USART_source.h
 *Description: Source file for USART Module for AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#include "STD_types.h"
#include "common_macros.h"
#include "USART_confg.h"
#include "USART_interface.h"
#include "USART_private.h"

void USART_init(u16 baudRate)
{
	SET_BIT(UCSRB_REG, TXEN);
	SET_BIT(UCSRB_REG, RXEN);
	SET_BIT(UCSRC_REG, URSEL);
	CLR_BIT()
}

void USART_Send(u8 data)
{
	UDR_REG = data;

	while (!(UCSRA_REG & TXC));
}

u8 USART_recieve(void)
{
	while (!(UCSRA_REG & RXC));

	return UDR_REG;
}

void USART_sendString (u8 *text)
{
	u8 i=0;
	while (text[i] != '\0')
	{
		USART_send(text[i]);
		i++;
	}
}

u8 USART_recieveString (void)
{
	u8 *st;
	while (UDR_REG != '#'){

	}

}
