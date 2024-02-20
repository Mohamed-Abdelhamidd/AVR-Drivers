/***********************************************************************************
 *File Name  : Timers_private.h
 *Description: Header file for addresses of registers related
 * 	  	  	   to Timers Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef TIMERS_PRIVATE_H_
#define TIMERS_PRIVATE_H_
/*=========================Timer0============================*/
#define		TCCR0_REG		*((volatile u8*) 0x53)
#define		CS00			0
#define 	CS01 			1
#define 	CS02			2
#define 	WGM01			3
#define 	COM00			4
#define 	COM01			5
#define 	WGM00			6
#define 	FOC0			7

#define 	TCNT0_REG		*((volatile u8*) 0x52)

#define 	OCR0_REG		*((volatile u8*) 0x5C)

#define 	TIMSK_REG		*((volatile u8*) 0x59)
#define 	TOIE0			0
#define 	OCIE0			1
#define 	TOIE1			2
#define 	OCIE1B			3
#define 	OCIE1A			4
#define 	TICIE1			5
#define 	TOIE2			6
#define 	OCIE2			7

#define 	TIFR_REG		*((volatile u8*) 0x58)
#define 	TOV0			0
#define 	OCF0			1
#define 	TOV1			2
#define 	OCF1B			3
#define 	OCF1A			4
#define		ICF1			5
#define 	TOV2			6
#define 	OCF2			7

/*=========================Timer2============================*/
#define 	TCCR2_REG		*((volatile u8*) 0x45)
#define 	CS20			0
#define 	CS21			1
#define 	CS22			2
#define 	WGM21			3
#define 	COM20			4
#define 	COM21			5
#define 	WGM20			6
#define 	FOC2			7

#define 	TCNT2_REG		*((volatile u8*) 0x44)

#define 	OCR2_REG		*((volatile u8*) 0x43)


/****************************************************************************/
/*Configuration_details*/
#define 	TIMER0					0
#define 	TIMER1					1
#define 	TIMER2					2

#define 	NORMAL_MODE				0
#define 	CTC_MODE				1
#define 	FAST_PWM_MODE			2
#define 	PWM_PHASE_CORRECT_MODE	3

#define 	DISCONNECTED 			0
#define 	TOGGLE_ON_COMPARE_MATCH 1
#define 	CLEAR_ON_COMPARE_MATCH 	2
#define 	SET_ON_COMPARE_MATCH	3

#define 	OVF_INTERRUPT			0
#define 	CTC_INTERRUPT			1
#define 	OVF_POLLING				2
#define 	CTC_POLLING				3
#define 	NONE					4


#endif /* TIMERS_PRIVATE_H_ */
