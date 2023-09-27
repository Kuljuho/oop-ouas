#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include <iostream>

#include "devicebaseclass.h"

class DeviceDisplay: public DeviceBaseClass
{

public:
    DeviceDisplay();
    ~DeviceDisplay();

    void setDisplayResolution();
    short getDisplayResolution();

private:
    short displayResolution = 0;

};

#endif // DEVICEDISPLAY_H
