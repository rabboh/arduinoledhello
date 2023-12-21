#ifndef MY_LED_CONTROLLER_H
#define MY_LED_CONTROLLER_H
#include <Arduino.h>
class LedController {

  private:
    int beats[100];
    int ptr = -1;

  public:
    LedController();
    void addHigh(int beats);
    void addLow(int beats);
    //void attachLed(Led led);
    void beat();
};
#endif 