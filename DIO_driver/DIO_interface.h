/***********************************************************************************
 *File Name  : DIO_interface.h
 *Description: Header file for Functions prototypes related
 * 	  	  	   to DIO Module at AVR_atmega32
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/*=================================Function Prototypes==================================*/

/*
 * Description :
 * Setup the direction of the required pin input/output.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
void DIO_setupPinDirection(DIO_PortNo PORT_ID, DIO_PortNo PIN_ID, DIO_Direction pinDirection);

/*
 * Description :
 * Setup the direction of the required port all pins input/output.
 * If the direction value is PORT_INPUT all pins in this port should be input pins.
 * If the direction value is PORT_OUTPUT all pins in this port should be output pins.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_setupPortDirection(DIO_PortNo PORT_ID, DIO_Direction portDirection);

/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request.
 * If the pin is input, this function will enable/disable the internal pull-up resistor.
 */
void DIO_writePin(DIO_PortNo PORT_ID, DIO_PortNo PIN_ID, u8 pinLogic);

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If any pin in the port is input pin this will activate/deactivate the internal pull-up resistor.
 * If the input port number is not correct, The function will not handle the request.
 */
void DIO_writePort (DIO_PortNo PORT_ID, u8 portLogic);

/*
 * Description :
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 * If the input port number or pin number are not correct, The function will return Logic Low.
 */
u8 DIO_readPin (DIO_PortNo PORT_ID, DIO_PortNo PIN_ID);

/*
 * Description :
 * Read and return the value of the required port.
 * If the input port number is not correct, The function will return ZERO value.
 */
u8 DIO_readPort (DIO_PortNo PORT_ID);

/*
 * Description :
 * Setup the direction of the required pin input then write on port register logic high.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
void DIO_setPullUpPin (DIO_PortNo PORT_ID, DIO_PortNo PIN_ID);

/*
 * Description :
 * funtion to disable all pull up resistors even if it is allowed through pins registers
 * If it is disabled so all pull up resistors are disabled
 */
void DIO_disableGeneralPullUp (void);

/*
 * Description:
 * Function to allow enabling pull up resistors at pins if needed
 */
void DIO_enableGeneralPullUp (void);


#endif /* DIO_INTERFACE_H_ */
