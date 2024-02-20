/***********************************************************************************
 *File Name  : STD_types.h
 *Description: Header file of common data types
 *Author     : Mohamed Abdelhamid
 ***********************************************************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/*Data Types*/
//we don't use the int as it is compiler dependent
typedef 	unsigned char		u8;
typedef 	signed char 		s8;
typedef 	unsigned short		u16;
typedef 	signed short		s16;
typedef 	unsigned int 		u32;
typedef 	signed int 			s32;
typedef 	unsigned long long 	u64;
typedef 	signed long long 	s64;
typedef 	float 				f32;
typedef 	double 				f64;

/*boolean Data Types*/
typedef 	unsigned char		boolean;

/*Boolean Values*/
#ifndef	true
#define true 		(1u)
#endif

#ifndef false
#define false 		(0u)
#endif

#define logic_high	(1u)
#define logic_low	(0u)

/*null pointer*/
#define NULL 		((void*)0)

#endif /* STD_TYPES_H_ */
