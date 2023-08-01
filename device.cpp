#include "device.h"


Device::Device(){
    if (gpioInitialise() < 0) exit();
    gpioSetMode(face1_PIN, PI_OUTPUT);
    gpioSetMode(face2_PIN, PI_OUTPUT);
    gpioSetMode(face3_PIN, PI_OUTPUT);
    gpioSetMode(face4_PIN, PI_OUTPUT);

}

void Device::open(int pin_index){
    gpioWrite(pin_index, PI_HIGH);
    gpioWrite(pin_index, PI_LOW);
}