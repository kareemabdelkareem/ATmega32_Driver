/****************************************************************/
/*   Author             :    Ahmed kareem abdelkareem				    */
/*	 Date 				:    20 April 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   public Accessing mechanism prototype*/ 
/*							and Sense Mode Definition [int.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _EXT_INT_H
#define _EXT_INT_H


/****************************************************************/	
/** !comment : Sense Mode Definition					   		*/
/****************************************************************/

#include "std_types.h"
#include "bit_math.h"
#include "EXTI_Config.h"
#include "EXTI_private.h"

#define IOC			1
#define FALLING		4
#define RISING		7
#define LOW_LEVEL	10

#define NULL 0
typedef void (*pf) (void);
static volatile pf x;
static volatile pf y;
static volatile pf z;
void __vector_1(void) __attribute__(( signal , used ));
void __vector_2(void) __attribute__(( signal , used ));
void __vector_3(void) __attribute__(( signal , used ));
/****************************************************************/
/* Description    :  This function used to initialize EXT0      */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/
void EXT0_voidInit ( void );

void EXT1_voidInit ( void );
void EXT2_voidInit (void);
/****************************************************************/
/* Description    : This function used to Enable EXT0			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
void EXT0_voidEnable( void );

void EXT1_voidEnable( void );
void EXT2_voidEnable(void) ;
/****************************************************************/
/* Description    : This function used to Disable EXT0			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
void EXT0_voidDisable( void );

void EXT1_voidDisable( void );
void EXT2_voidDisable(void) ;
/****************************************************************/
/* Description    : This function used to communicate with the	*/
/*					function in App Layer(The Callback function)*/ 
/*						[ Layer Architecture Problem Solved ]	*/
/*																*/
/*					Inputs : Pointer to function that points to	*/
/*							 the first line of the function(ISR)*/
/*					Return : void								*/
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
void EXT0_voidCallBack(pf addresscpy);

void EXT1_voidCallBack(pf addresscpy);
void EXT2_voidCallBack(pf addresscpy);
/****************************************************************/
/* Description    : This function used to Set lach Interrupt	*/
/*									 happens.					*/ 
/*																*/
/*					Inputs : Sense Mode				  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
void EXT0_voidSetSignalch(u8 SenseCpy);

void EXT1_voidSetSignalch(u8 SenseCpy);
void EXT2_voidSetSignalch(u8 SenseCpy) ;
/****************************************************************/
/* Description    : This function used to Check if interrupt is */
/*					Executed or Not.							*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : flag Status [ LBTY_OK , LBTY_NOK ]	*/
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
/*
flagStatus EXT0_enuIsExecuted( void );
*/

#endif	/** !comment  :  End of guard                          **/