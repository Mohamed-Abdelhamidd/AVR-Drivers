/***********************************************************************************
 *File Name  : Ex_interrupts_interface.h
 *Description: Header file for Functions prototypes related
 * 	  	  	   to EX_interrupts Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef EX_INTERRUPTS_INTERFACE_H_
#define EX_INTERRUPTS_INTERFACE_H_

/*Function to initialize INT*/
void Ex_InterruptsInit (void);

/*function to Enable the GIE BIT*/
void I_bitEnable (void);

/*function to Disable the GIE BIT*/
void I_bitDisable (void);


#endif /* EX_INTERRUPTS_INTERFACE_H_ */
