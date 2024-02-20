/***********************************************************************************
 *File Name  : Timers_source.h
 *Description: Source file for Timer Module for AVR_atmega32 MCU
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#include "timers_interface.h"
#include "timers_private.h"
#include "timers_Confg.h"
#include "common_macros.h"
#include "STD_types.h"
//#include <avr/interrupt.h>

/*====================================TIMER0===============================*/
#if (TIMER_MODEL == TIMER0)

#if (ACTION_MODE == OVF_INTERRUPT)
void __vector_11 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_11 (void)
{

}
/*-------------------------------------------------------------------------*/
#elif (ACTION_MODE == CTC_INTERRUPT)
void __vector_10 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_10 (void)
{

}
/*-------------------------------------------------------------------------*/
#elif ((ACTION_MODE == OVF_POLLING)||(ACTION_MODE == CTC_POLLING)))
u8 readFlag (void)
{
#if (ACTION_MODE == OVF_POLLING)
	return (GET_BIT(TIFR_REG, TOV0));
#elif (ACTION_MODE == CTC_POLLING)
	return (GET_BIT(TIFR_REG, OCF0));
#endif
}
#endif
/*-------------------------------------------------------------------------*/
void timer0Init	(prescaler CLOCK)
{
#if (TIMER_MODE	==	NORMAL_MODE)
	SET_BIT(TCCR0_REG, FOC0);
	CLR_BIT(TCCR0_REG, WGM00);
	CLR_BIT(TCCR0_REG, WGM01);
#if (ACTION_MODE == OVF_INTERRUPT)
	SET_BIT(TIMSK_REG, TOIE0);
#endif
#elif (TIMER_MODE == CTC_MODE)
	SET_BIT(TCCR0_REG, FOC0);
	CLR_BIT(TCCR0_REG, WGM00);
	SET_BIT(TCCR0_REG, WGM01);
#if (ACTION_MODE == CTC_INTERRUPT)
	SET_BIT(TIMSK_REG, OCIE0);
#endif
#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#endif

#elif (TIMER_MODE == FAST_PWM_MODE)
	CLR_BIT(TCCR0_REG, FOC0);
	SET_BIT(TCCR0_REG, WGM00);
	SET_BIT(TCCR0_REG, WGM01);

#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#endif

#elif (TIMER_MODE == PWM_PHASE_CORRECT_MODE)
	CLR_BIT(TCCR0_REG, FOC0);
	SET_BIT(TCCR0_REG, WGM00);
	CLR_BIT(TCCR0_REG, WGM01);

#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	CLR_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR0_REG, COM00);
	SET_BIT(TCCR0_REG, COM01);
#endif
#endif

	TCCR0_REG = ((TCCR0_REG&0xF8) | (CLOCK));
}
/*-------------------------------------------------------------------------*/
void initialTimer0Value (u8 time)
{
	/*0--->255, it just works for one overflow, if repeated reload it*/
	TCNT0_REG = time;
}
/*-------------------------------------------------------------------------*/
void CTC_Timer0Value (u8 stop)
{
	OCR0_REG = stop;	/*0--->255*/
}
/*================================TIMER1===================================*/
#elif (TIMER_MODEL == TIMER1)

/*================================TIMER2===================================*/
#elif (TIMER_MODEL == TIMER2)

#if (ACTION_MODE == OVF_INTERRUPT)
void __vector_5 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_5 (void)
{

}
/*-------------------------------------------------------------------------*/
#elif (ACTION_MODE == CTC_INTERRUPT)
void __vector_4 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_4 (void)
{

}
/*-------------------------------------------------------------------------*/
#elif ((ACTION_MODE == OVF_POLLING)||(ACTION_MODE == CTC_POLLING)))
u8 readFlag (void)
{
#if   (ACTION_MODE == OVF_POLLING)
	return (GET_BIT(TIFR_REG, TOV2));
#elif (ACTION_MODE == CTC_POLLING)
	return (GET_BIT(TIFR_REG, OCF2));
#endif
}
#endif
/*-------------------------------------------------------------------------*/
void timer2Init	(prescaler CLOCK)
{
#if (TIMER_MODE	==	NORMAL_MODE)
	SET_BIT(TCCR2_REG, FOC2);
	CLR_BIT(TCCR2_REG, WGM20);
	CLR_BIT(TCCR2_REG, WGM21);
#if (ACTION_MODE == OVF_INTERRUPT)
	SET_BIT(TIMSK_REG, TOIE2);
#endif
#elif (TIMER_MODE == CTC_MODE)
	SET_BIT(TCCR2_REG, FOC2);
	CLR_BIT(TCCR2_REG, WGM20);
	SET_BIT(TCCR2_REG, WGM21);
#if (ACTION_MODE == CTC_INTERRUPT)
	SET_BIT(TIMSK_REG, OCIE2);
#endif
#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#endif

#elif (TIMER_MODE == FAST_PWM_MODE)
	CLR_BIT(TCCR2_REG, FOC2);
	SET_BIT(TCCR2_REG, WGM20);
	SET_BIT(TCCR2_REG, WGM21);

#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#endif

#elif (TIMER_MODE == PWM_PHASE_CORRECT_MODE)
	CLR_BIT(TCCR2_REG, FOC2);
	SET_BIT(TCCR2_REG, WGM20);
	CLR_BIT(TCCR2_REG, WGM21);

#if  (PWM_OUT_MODE == DISCONNECTED)
	CLR_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == TOGGLE_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	CLR_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == CLEAR_ON_COMPARE_MATCH)
	CLR_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#elif (PWM_OUT_MODE == SET_ON_COMPARE_MATCH)
	SET_BIT(TCCR2_REG, COM20);
	SET_BIT(TCCR2_REG, COM21);
#endif
#endif

	TCCR2_REG = ((TCCR2_REG&0xF8) | (CLOCK));
}
/*-------------------------------------------------------------------------*/
void initialTimer2Value (u8 time)
{
	/*0--->255, it just works for one overflow, if repeated reload it*/
	TCNT2_REG = time;
}
/*-------------------------------------------------------------------------*/
void CTC_Timer2Value (u8 stop)
{
	OCR2_REG = stop;	/*0--->255*/
}
/*-------------------------------------------------------------------------*/
#endif

