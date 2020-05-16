# include "debug.h"

void TimeOutChecker(uint8_t* timeout_checker, uint8_t err_code)
{
	/* Check Systick counter flag to decrement the time-out value */
	if (LL_SYSTICK_IsActiveCounterFlag())
		{
			if((*timeout_checker)-- == 0)
			{
			  I2C_Error_Handler(err_code);
			}
		}
}


/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void I2C_Error_Handler(uint8_t code)
{
	// USER CODE BEGIN I2C_Error_Handler_Debug
  // User can add his own implementation to report the  error return state
	__asm("nop");
  // USER CODE END Error_Handler_Debug
}
