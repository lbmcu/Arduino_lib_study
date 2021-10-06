#include "RGB_LED.h"

void RGB_LED::InitRGB(unsigned int r, unsigned int g, unsigned int b)
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