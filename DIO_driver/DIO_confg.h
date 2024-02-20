/***********************************************************************************
 *File Name  : Ex_DIO_confg.h
 *Description: Header file for configurations related
 * 	  	  	   to DIO Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef DIO_CONFG_H_
#define DIO_CONFG_H_

/*==========================Definitions========================*/
#define LOGIC_LOW		0
#define LOGIC_HIGH		1

#define NUM_OF_PINS		8
#define NUM_OF_PORTS 	4

/*=======================Types Declaration=====================*/
typedef enum{
	INPUT,
	OUTPUT
}DIO_Direction;

typedef enum {
	PIN0_ID,
	PIN1_ID,
	PIN2_ID,
	PIN3_ID,
	PIN4_ID,
	PIN5_ID,
	PIN6_ID,
	PIN7_ID
}DIO_PinNo;

typedef enum{
	PORTA_ID,
	PORTB_ID,
	PORTC_ID,
	PORTD_ID
}DIO_PortNo;


#endif /* DIO_CONFG_H_ */
