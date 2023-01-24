#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(-1); 

void setup()   
{                
  // I2c addressing
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  // Clear the buffer memory
  display.clearDisplay();

  // Display text on OLED
  display.setTextSize(1); 
  display.setTextColor(WHITE); 
  display.setCursor(0,0);
  display.println("Hello World");
  display.display();
  delay(2000);
  display.clearDisplay();
 
}

void loop() {}