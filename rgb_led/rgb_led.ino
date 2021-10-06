#include "RGB_LED.h"
RGB_LED led;

void setup() {
  led.InitRGB(4,5,6);
}

void loop() {
  // put your main code here, to run repeatedly:
  led.SetRed();
  delay(500);
  led.ClrRed();
  delay(200);
  
}
