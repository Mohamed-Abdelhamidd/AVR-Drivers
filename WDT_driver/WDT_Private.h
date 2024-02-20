/***********************************************************************************
 *File Name  : WDT_Private.h
 *Description: Header file for addresses of registers related
 * 	  	  	   to WAtch Dog Timer Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef WDT_PRIVATE_H_
#define WDT_PRIVATE_H_


#define WDTCR_REG	*((volatile u8*)0x41)
#define WDP0		0
#define WDP1		1
#define WDP2		2
#define WDE			3
#define WDTOE		4


#endif /* WDT_PRIVATE_H_ */
