#include "RGB_LED.h"

RGB_LED::RGB_LED(unsigned int r, unsigned int g, unsigned int b)
{
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, LOW);
    this->red_pin = r;
    this->green_pin = g;
    this->blue_pin = b;
}

void RGB_LED::SetRed(void)
{
    digitalWrite(this->red_pin, HIGH);
}

void RGB_LED::ClrRed(void)
{
    digitalWrite(this->red_pin, LOW);
}

void RGB_LED::SetGreen(void)
{
    digitalWrite(this->green_pin, HIGH);
}

void RGB_LED::ClrGreen(void)
{
    digitalWrite(this->green_pin, LOW);
}

void RGB_LED::SetBlue(void)
{
    digitalWrite(this->blue_pin, HIGH);
}

void RGB_LED::ClrBlue(void)
{
    digitalWrite(this->blue_pin, LOW);
}

void RGB_LED::RGB_COLOR(unsigned char color)
{
    if((color & RED) != 0){
        this->SetRed();
    }else{
        this->ClrRed();
    }

    if((color & GREEN) != 0){
        this->SetGreen();
    }else{
        this->ClrGreen();
    }

    if((color & BLUE) != 0){
        this->SetBlue();
    }else{
        this->ClrBlue();
    }
}