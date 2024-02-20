/***********************************************************************************
 *File Name  : WDT_confg.h
 *Description: Header file for configurations related
 * 	  	  	   to Watch dog timer Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef WDT_CONFG_H_
#define WDT_CONFG_H_

typedef enum{
_16K_   = 0x00,
_32K_   = 0x01,
_64K_   = 0x02,
_128K_  = 0x03,
_256K_  = 0x04,
_512K_  = 0x05,
_1024K_ = 0x06,
_2048K_ = 0x07
}WDT_Period;

#endif /* WDT_CONFG_H_ */
