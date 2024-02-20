/***********************************************************************************
 *File Name  : Ex_interrupts_private.h
 *Description: Header file for addresses of registers related
 * 	  	  	   to EX_interrupts Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef EX_INTERRUPTS_PRIVATE_H_
#define EX_INTERRUPTS_PRIVATE_H_


#define SREG_REG	*((volatile u8*) 0x5F)
#define I_BIT		7

#define GICR_REG	*((volatile u8*) 0x5B)
#define INT0		6
#define INT1		7
#define INT2		5

#define MCUCSR_REG	*((volatile u8*) 0x54)
#define ISC2		6

#define MCUCR_REG	*((volatile u8*) 0x55)
#define ISC00		0
#define ISC01		1
#define ISC10		2
#define ISC11		3

#define GIFR_REG	*((volatile u8*) 0x5A)
#define INTF1		7
#define INTF0		6
#define INTF2		5

#define LOW_LEVEL		0x00
#define LOGIC_CHANGE	0x01
#define FALLING_EDGE	0x02
#define RISING_EDGE		0x03

#define INTERRUPT0	0
#define INTERRUPT1	1
#define INTERRUPT2	2
#endif /* EX_INTERRUPTS_PRIVATE_H_ */
