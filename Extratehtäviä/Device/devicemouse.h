#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

#include <iostream>

#include "devicebaseclass.h"

class DeviceMouse: public DeviceBaseClass
{

public:
    DeviceMouse();
    ~DeviceMouse();

    void setPrimaryButton();
    short getPrimaryButton();

private:
    short primaryButton = 0;
};

#endif // DEVICEMOUSE_H
