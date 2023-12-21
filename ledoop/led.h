#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>
class Led {
  
  private:
    byte pin;
    
  public:
    Led();
    void init();
    void setPin(byte pin);
    void on();
    void off();
};
#endif