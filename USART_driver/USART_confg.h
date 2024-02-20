/***********************************************************************************
 *File Name  : USART_Confg.h
 *Description: Header file for configurations related
 * 	  	  	   to USART Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/


#ifndef USART_CONFG_H_
#define USART_CONFG_H_

#include "USART_private.h"

/*select operating mode of the USART
 * SYNC_POLLING
 * SYNC_INTERRUPT
 * ASYNC_POLLING
 * Async_INTERRUPT
 */
#define operating_Mode		SYNC_INTERRUPT


#if ((operating_Mode == SYNC_POLLING)||(operating_Mode == SYNC_INTERRUPT))

/*select mcu role
 * Master
 * Slave
 */
#define MCU_ROLE			Master


#elif ((operating_Mode == Async_INTERRUPT)||(operating_Mode == ASYNC_POLLING))

/*select Double speed mode with Asynchronous mode
 * ENABLE
 * DISABLE
 */
#define async_Speed_X2		DISABLE

/*select number of stop bits
 * ONE
 * TWO
 */
#define frame_stop_bits		one

/*select number of data bits at frame
 * FIVE
 * SIX
 * SEVEN
 * EIGHT
 * NINE	(addresses case)
 */
#define frame_data_bits

/*select polarity check bits
 * NOT_EXIST
 * EVEN
 * ODD
 */
#define frame_polarity_bits

#endif

#endif /* USART_CONFG_H_ */
