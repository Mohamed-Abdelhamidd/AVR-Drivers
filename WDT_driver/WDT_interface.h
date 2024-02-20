/***********************************************************************************
 *File Name  : WDT_interface.h
 *Description: Header file for Functions prototypes related
 * 	  	  	   to Watch Dog Timer Module at AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

/*Function that starts the watch dog timer
 *time: argument of enum WDR_Period enum that
 *	    defines the period of wdt timer till
 *      it reaches zero */
void WDT_start (WDT_Period time);

/*function that turns off the WDT after reaching
 *the end of the application*/
void WDT_TurnOff (void);


#endif /* WDT_INTERFACE_H_ */
