/** @addtogroup Application
 *  @brief Application for cli testing
 *  @{
 */
/*****************************************************************************/
/** @file app.c
 *  @brief Implement application functions
 *  @author Savindra Kumar(savindran1989@gmail.com)
 *  @bug No known bugs.
 */
/*****************************************************************************/
/******************************************************************************
 *                           Includes
 ******************************************************************************/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "projectinfo.h"
#include "app.h"

/******************************************************************************
 *                           Defines and typedefs
 ******************************************************************************/

/******************************************************************************
 *                           external variables
 ******************************************************************************/

/******************************************************************************
 *                           Private variables
 ******************************************************************************/

/******************************************************************************
 *                           Private Functions
 ******************************************************************************/


/******************************************************************************
 *                    G L O B A L  F U N C T I O N S
 ******************************************************************************/
/** @brief Display Project Information
 *  @param[in] ppcParameters    Pointer to parameters string
 *  @param[in] ucParameterCount Number of Parameters
 *  @param[out] pcResult        Pointer to result buffer
 *  @return     uint8_t         true-Command executed successfully,
 *                              false-Command not executed
 */
uint8_t AppShowInfo(char **ppcParameters, uint8_t ucParameterCount, char *pcResult)
{
	uint16_t usLength = 0;

	usLength += sprintf(pcResult + usLength, "\r\n");
	usLength += sprintf(pcResult + usLength, "................................................................\r\n");
	usLength += sprintf(pcResult + usLength, "\tPROJECT.. [ %s ]\r\n", PROJECT_TITLE);
	usLength += sprintf(pcResult + usLength, "\tVERSION.. [ %s ]\r\n", FIRMWARE_VERSION);
	usLength += sprintf(pcResult + usLength, "\tDATE..... [ %s %s]\r\n", __DATE__, __TIME__);
	usLength += sprintf(pcResult + usLength, "................................................................\r\n");

	return true;
}//end AppShowInfo

/** @brief Exit from application
 *  @param[in] ppcParameters    Pointer to parameters string
 *  @param[in] ucParameterCount Number of Parameters
 *  @param[out] pcResult        Pointer to result buffer
 *  @return     uint8_t         true-Command executed successfully,
 *                              false-Command not executed
 */
uint8_t AppExit(char **ppcParameters, uint8_t ucParameterCount, char *pcResult)
{
	exit(0);
	return true;
}//end AppExit

/** @brief Sum of two numbers
 *  @param[in] ppcParameters    Pointer to parameters string
 *  @param[in] ucParameterCount Number of Parameters
 *  @param[out] pcResult        Pointer to result buffer
 *  @return     uint8_t         true-Command executed successfully,
 *                              false-Command not executed
 */
uint8_t AppSum(char **ppcParameters, uint8_t ucParameterCount, char *pcResult)
{
	uint16_t usLength = 0;
	int32_t iNum1     = 0;
	int32_t iNum2     = 0;
	int32_t iSum      = 0;

	iNum1 = atoi((const char *)ppcParameters[0]);
	iNum2 = atoi((const char *)ppcParameters[1]);

	iSum = (iNum1 + iNum2);

	usLength += sprintf(pcResult + usLength, "\r\n");
	usLength += sprintf(pcResult + usLength, "Sum = %d", iSum);
	usLength += sprintf(pcResult + usLength, "\r\n");

	return true;
}//end AppSum

/******************************************************************************
 *                           L O C A L  F U N C T I O N S
 ******************************************************************************/

/******************************************************************************
 *                             End of file
 ******************************************************************************/
/** @}*/