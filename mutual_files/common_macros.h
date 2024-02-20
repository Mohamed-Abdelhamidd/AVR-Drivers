/***********************************************************************************
 *File Name  : common_macros.h
 *Description: Header file for common used macros for registers
 *			   operations
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_


#define SET_BIT(REG, BIT_no)		(REG |= (1<<BIT_no))
/*to give the bit value 1*/
#define CLR_BIT(REG, BIT_no)		(REG &= (~(1<<BIT_no)))
/*to give the bit value 0*/
#define	TOG_BIT(REG, BIT_no)		(REG ^= (1<<BIT_no))
/*to Toggle the bit value*/
#define GET_BIT(REG, BIT_no)		((REG & (1<<BIT_no))>> BIT_no)
/*to get the bit value from the register*/
#define BIT_IS_SET (REG, BIT_no)	(REG & (1<<BIT_no))
/*to check if the bit value is 1*/
#define BIT_IS_CLR (REG, BIT_no)	(!(REG & (1<<BIT_no)))
/*to check if the bit value is 0*/


#endif /* COMMON_MACROS_H_ */
