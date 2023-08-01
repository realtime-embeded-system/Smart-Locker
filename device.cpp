#include "device.h"


Device::Device(){
    
    wiringPiSetup();
    pinMode(face1_PIN, OUTPUT);
    pinMode(face2_PIN, OUTPUT);
    pinMode(face3_PIN, OUTPUT);
    pinMode(face4_PIN, OUTPUT);
}

void Device::open(int pin_index){
    digitalWrite(pin_index, HIGH);
    digitalWrite(pin_index, LOW);
}