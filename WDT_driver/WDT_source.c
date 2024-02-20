/***********************************************************************************
 *File Name  : WDT_source.h
 *Description: Source file for Watch Dog Timer Module for AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#include "WDT_Private.h"
#include "WDT_confg.h"
#include "WDT_interface.h"
#include "STD_Types.h"
#include "common_macros.h"

/*Function that starts the watch dog timer
 *time: argument of enum WDR_Period enum that
 *	    defines the period of wdt timer till
 *      it reaches zero */
void WDT_start (WDT_Period time)
{
	WDTCR_REG |= time;
}

/*function that turns off the WDT after reaching
 *the end of the application*/
void WDT_TurnOff (void)
{
	WDTCR_REG |= (1<<WDE)|(1<<WDTOE);
	WDTCR_REG = 0x00;
}
