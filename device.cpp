#include "device.h"
#include <iostream>


Device::Device(){
    if (gpioInitialise() < 0) exit(0);
    gpioSetMode(face1_PIN, PI_OUTPUT);
    gpioSetMode(face2_PIN, PI_OUTPUT);
    gpioSetMode(face3_PIN, PI_OUTPUT);
    gpioSetMode(face4_PIN, PI_OUTPUT);

}

void Device::open(int pin_index){
    gpioWrite(pin_index, PI_HIGH);
    gpioWrite(pin_index, PI_LOW);
}