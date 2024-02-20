/***********************************************************************************
 *File Name  : USART_private.h
 *Description: Header file for addresses of registers related
 * 	  	  	   to USART Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/


#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_

#define UDR_REG 	*((volatile u8*)0x2C)

#define UCSRA_REG	*((volatile u8*)0x2B)
#define MPCM		0
#define U2X			1
#define PE			2
#define DOR			3
#define FE			4
#define UDRE		5
#define TXC			6
#define RXC			7

#define UCSRB_REG	*((volatile u8*)0x2A)
#define TXB8		0
#define RXB8		1
#define UCSZ2		2
#define TXEN		3
#define RXEN		4
#define UDRIE		5
#define TXCIE		6
#define RXCIE		7

#define UCSRC_REG	*((volatile u8*)0x40)
#define UCPOL		0
#define UCSZ0		1
#define UCSZ1		2
#define USBS		3
#define UPM0		4
#define UPM1		5
#define UMSEL		6
#define URSEL		7

#define UBRRH_REG	*((volatile u8*)0x40)
#define URSEL		15

#define UBRRL_REG	*((volatile u8*)0x29)

#define SYNC_POLLING	0
#define SYNC_INTERRUPT	1
#define ASYNC_POLLING	2
#define Async_INTERRUPT	3
#define ENABLE			4
#define DISABLE			5

#endif /* USART_PRIVATE_H_ */
