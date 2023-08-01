#pragma once

#include <pigpio.h>

#define face1_PIN 24
#define face2_PIN 25
#define face3_PIN 27
#define face4_PIN 28

class Device{
public:

    Device();

    void open(int bin);

    // void close();

private:

};