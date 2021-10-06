#include "RGB_LED.h"
RGB_LED led;

void setup() {
  led.InitRGB(4,5,6);
}

void loop() {
  // put your main code here, to run repeatedly:
  led.RGB_COLOR(RED);
  delay(500);
  led.RGB_COLOR(GREEN);
  delay(500);
  led.RGB_COLOR(BLUE);
  delay(500);
  led.RGB_COLOR(YELLOW);
  delay(500);
  led.RGB_COLOR(PURPLE);
  delay(500);
  led.RGB_COLOR(CYAN);
  delay(500);
}
