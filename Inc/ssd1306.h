
#include "stm32f1xx_ll_i2c.h"

#ifndef ssd1306
#define ssd1306

// I2c address
#define SSD1306_I2C_ADDR        0x78
// SSD1306 width in pixels
#define SSD1306_WIDTH           128
// SSD1306 LCD height in pixels
#define SSD1306_HEIGHT          32

#define I2C_REQUEST_WRITE                       0x00
#define I2C_REQUEST_READ                        0x01


//
//  Enumeration for screen colors
//
typedef enum {
	Black = 0x00, // Black color, no pixel
	White = 0x01  //Pixel is set. Color depends on LCD
} SSD1306_COLOR;

//
//  Struct to store transformations
//
typedef struct {
	uint16_t CurrentX;
	uint16_t CurrentY;
	uint8_t Inverted;
	uint8_t Initialized;
} SSD1306_t;


//
//  Function definitions
//
uint8_t ssd1306_Init(void);
void ssd1306_Fill(SSD1306_COLOR color);
void ssd1306_UpdateScreen(void);
void ssd1306_DrawPixel(uint8_t x, uint8_t y, SSD1306_COLOR color);
void ssd1306_SetCursor(uint8_t x, uint8_t y);
void ssd1306_DrawChar(char ch, const uint8_t font[], uint8_t X, uint8_t Y, SSD1306_COLOR color);
void ssd1306_DrawText(const char* str, const uint8_t font[], uint8_t X, uint8_t Y,  SSD1306_COLOR color);

#endif
