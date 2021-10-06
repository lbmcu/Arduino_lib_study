#include <arduino.h>

class RGB_LED
{
private:
    unsigned int red_pin;
    unsigned int green_pin;
    unsigned int blue_pin;
public:
    void InitRGB(unsigned int r, unsigned int g, unsigned int b);
    void SetRed(void);
    void ClrRed(void);
    void SetGreen(void);
    void ClrGreen(void);
    void SetBlue(void);
    void ClrBlue(void);
};
