/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef button_h
#define button_h

/**********************************************************************************************************************
 * INCLUDES

 *********************************************************************************************************************/
 #include "dio.h"
#define button_pullup 0
#define button_pulldown 1

#define button1_conn  button_pullup
#define button2_conn  button_pullup
#define button3_conn  button_pullup
#define button4_conn  button_pullup

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

typedef enum
{
	button1 = 1,
	button2 = 2,
	button3 = 3,
	button4 = 4,
	
}button_ID;

typedef enum
{
	HIGH = 1,
	LOW= 0,
	
}button_state;
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void button_init(void);

 button_state button_get_states(button_ID button_id);
 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: FILE_NAME.h
 *********************************************************************************************************************/
