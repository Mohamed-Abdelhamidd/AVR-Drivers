/***********************************************************************************
 *File Name  : timers_Confg.h
 *Description: Header file for configurations related
 * 	  	  	   to timers Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef TIMERS_CONFG_H_
#define TIMERS_CONFG_H_

/*Select which Timer you need to use
 * TIMER0
 * TIMER1
 * TIMER2
 */
#define TIMER_MODEL	TIMER0

/*Select the needed mode of work
 * NORMAL_MODE
 * CTC_MODE
 * FAST_PWM_MODE
 * PWM_PHASE_CORRECT_MODE
 */
#define TIMER_MODE	NORMAL_MODE

/*Select the OC0 in case of not overflow mode
 * DISCONNECTED
 * TOGGLE_ON_COMPARE_MATCH-> (Reserved in PWM)
 * CLEAR_ON_COMPARE_MATCH -> (NON_Inverting)
 * SET_ON_COMPARE_MATCH	  -> (Inverting)
 */
#define PWM_OUT_MODE	CLEAR_ON_COMPARE_MATCH	/*each timer has its output pin */

/*Available Clock Prescaller to choose*/
typedef enum {
	No_frequency,
	FCPU,
	FCPU_8,
	FCPU_64,
	FCPU_256,
	FCPU_1024,
	COUNTER_FAllING,
	COUNTER_RISING
}prescaler;

/*Select Action MODE
 * OVF_INTERRUPT
 * CTC_INTERRUPT
 * OVF_POLLING
 * CTC_POLLING
 * NONE
 */
#define ACTION_MODE	OVF_INTERRUPT


#endif /* TIMERS_CONFG_H_ */
