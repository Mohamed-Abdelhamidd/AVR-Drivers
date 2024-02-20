/***********************************************************************************
 *File Name  : Ex_interrupts_Confg.h
 *Description: Header file for configurations related
 * 	  	  	   to EX_interrupts Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef EX_INTERRUPTS_CONFG_H_
#define EX_INTERRUPTS_CONFG_H_

/*select the req. interrupt:
 * INTERRUPT0
 * INTERRUPT1
 * INTERRUPT2*/
#define RUNNING_INT		INTERRUPT1

/*Select_Detecting_Edge:
 * LOW_LEVEL		(Exclude INT2)
 * LOGIC_CHANGE		(Exclude INT2)
 * FALLING_EDGE
 * RISING_EDGE */
#define INT_EDGE		LOGIC_CHANGE


#endif /* EX_INTERRUPTS_CONFG_H_ */
