#include <arduino.h>

#define     RED     0x04
#define     GREEN   0x02
#define     BLUE    0x01
#define     BLACK   0x00        //黑色
#define     PURPLE  (RED+BLUE)  //紫色
#define     YELLOW  (RED+GREEN) //黄色
#define     CYAN    (GREEN+BLUE)  //青色
#define     WHITE   (RED+GREEN+BLUE)  //白色

class RGB_LED
{
private:
    unsigned int red_pin;
    unsigned int green_pin;
    unsigned int blue_pin;
public:
    RGB_LED(unsigned int r, unsigned int g, unsigned int b); //构造函数
    void SetRed(void);
    void ClrRed(void);
    void SetGreen(void);
    void ClrGreen(void);
    void SetBlue(void);
    void ClrBlue(void);
    void RGB_COLOR(unsigned char color);
};
