#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

#include <iostream>

#include "devicebaseclass.h"

class DeviceTouchPad: public DeviceBaseClass
{

public:
    DeviceTouchPad();
    ~DeviceTouchPad();

    void setTouchPadSensitivity();
    short getTouchPadSensitivity();

private:
    short touchPadSensitivity = 0;

};

#endif // DEVICETOUCHPAD_H
