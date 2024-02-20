/***********************************************************************************
 *File Name  : Ex_interrupts_source.h
 *Description: Source file for External Interrupts Module for AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#include "Ex_interrupts_Confg.h"
#include "Ex_interrupts_interface.h"
#include "Ex_interrupts_private.h"
#include "STD_types.h"
#include "common_macros.h"
//#include <avr/interrupt.h>

/*ISR of INT0*/
#if (RUNNING_INT == INTERRUPT0)
void __vector_1 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_1 (void)
{

}
/*Function to initialize INT0*/
void Ex_InterruptsInit (void)
{
#if (INT_EDGE == RISING_EDGE)	/*Select the Rising EDGE*/
	SET_BIT(MCUCR_REG, ISC00);
	SET_BIT(MCUCR_REG, ISC01);
#elif (INT_EDGE == FALLING_EDGE)/*Select the falling EDGE*/
	CLR_BIT(MCUCR_REG, ISC00);
	SET_BIT(MCUCR_REG, ISC01);
#elif (INT_EDGE == LOGIC_CHANGE)/*Select the LOGIC Change*/
	SET_BIT(MCUCR_REG, ISC00);
	CLR_BIT(MCUCR_REG, ISC01);
#elif (INT_EDGE == LOW_LEVEL)	/*Select LOW Level*/
	CLR_BIT(MCUCR_REG, ISC00);
	CLR_BIT(MCUCR_REG, ISC01);
#endif
	SET_BIT(GICR_REG, INT0);	/*Enable peripherla Interrupt BIT*/
}
/*-------------------------------------------------------------*/
/*ISR of INT0*/
#elif (RUNNING_INT == INTERRUPT1)
void __vector_2 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_2 (void)
{

}
/*Function to initialize INT1*/
void Ex_InterruptsInit (void)
{
#if (INT_EDGE == RISING_EDGE)	/*Select the Rising EDGE*/
	SET_BIT(MCUCR_REG, ISC10);
	SET_BIT(MCUCR_REG, ISC11);
#elif (INT_EDGE == FALLING_EDGE)/*Select the falling EDGE*/
	CLR_BIT(MCUCR_REG, ISC10);
	SET_BIT(MCUCR_REG, ISC11);
#elif (INT_EDGE == LOGIC_CHANGE)/*Select the LOGIC Change*/
	SET_BIT(MCUCR_REG, ISC10);
	CLR_BIT(MCUCR_REG, ISC11);
#elif (INT_EDGE == LOW_LEVEL)	/*Select LOW Level*/
	CLR_BIT(MCUCR_REG, ISC11);
	CLR_BIT(MCUCR_REG, ISC10);
#endif
	SET_BIT(GICR_REG, INT1);	/*Enable peripherla Interrupt BIT*/
}
/*-------------------------------------------------------------*/
/*ISR of INT0*/
#elif (RUNNING_INT == INTERRUPT2)
void __vector_3 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_3 (void)
{

}
/*Function to initialize INT2*/
void Ex_InterruptsInit (void)
{
#if (INT_EDGE == RISING_EDGE)	/*Select the Rising EDGE*/
	SET_BIT(MCUCSR_REG, ISC2);
#elif (INT_EDGE == FALLING_EDGE)/*Select the falling EDGE*/
	CLR_BIT(MCUCSR_REG, ISC2);
#endif
	SET_BIT(GICR_REG, INT2);	/*Enable peripherla Interrupt BIT*/
}
#endif
/*-------------------------------------------------------------*/
/*function to Enable the GIE BIT*/
void I_bitEnable (void)
{
	SET_BIT(SREG_REG, I_BIT);	/*SET I-BIT*/
}
/*-------------------------------------------------------------*/
/*function to Disable the GIE BIT*/
void I_bitDisable (void)
{
	CLR_BIT(SREG_REG, I_BIT);	/*CLEAR I-BIT*/
}



