#include "Adafruit_SSD1306.h"
#include "Adafruit_GFX.h"

#define OLED_RESET D4
Adafruit_SSD1306 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup() {
    randomSeed(analogRead(A0));

    Serial.begin(9600);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
    display.clearDisplay();   // clears the screen and buffer
    display.setTextColor(WHITE,BLACK); // Normal text
    display.setCursor(0,0);
}

void loop() {
     int freq = random(31, 16001);
     int count = random(10, 2001);
     String dog = String(freq);
     String cat = dog + "hz";
     tone(D3, freq, count);
     display.clearDisplay();
     display.setCursor(0,0);
     display.setTextSize(2);
     display.println("Frequency:");
     display.setTextSize(3);
     display.println(cat);
     display.display();
     delay(count);
}