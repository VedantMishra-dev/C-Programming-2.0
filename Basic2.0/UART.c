
#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules

//Data after reading back will be stored in this buffer
BYTE WriteBuffer[16]; 

void WriteFromRAM(void);

void main()
{
	LCD_1_Start();
	
	// Enable the I2CHW module in Master Configuration
    I2CHW_EnableMstr();
	
	// Enable the I2C Interrupts
	I2CHW_EnableInt();
	
	// Enable Global Interrupts
	M8C_EnableGInt;
	
	
	// Write data from RAM to EEPROM
	WriteFromRAM();
}
	

void WriteFromRAM(void)
{
	
	I2CHW_fSendStart(0x00,I2CHW_WRITE  );	
	while (!(I2CHW_bReadI2CStatus()))
	{
		I2CHW_SendStop();
		while (!(I2CHW_bReadI2CStatus()))
		{
			I2CHW_SendStop();
			while (!(I2CHW_bReadI2CStatus()))
			{
				I2CHW_SendStop();
				I2CHW_fSendStart(0x00,I2CHW_WRITE  );
			}
			
			I2CHW_ClrWrStatus();
			I2CHW_fWrite(0x07);
		}
		I2CHW_ClrWrStatus();
		I2CHW_fSendRepeatStart(0x00, I2CHW_READ);
	}
	I2CHW_ClrWrStatus();	// Clear the Flag
	I2CHW_fReadBytes(0x00, WriteBuffer, 3, I2CHW_CompleteXfer);
  	while (!(I2CHW_bReadI2CStatus() & I2CHW_RD_COMPLETE));
	I2CHW_ClrRdStatus();
	LCD_1_Position(0,0);
	LCD_1_PrString(WriteBuffer);
	
	while(1);
    
}