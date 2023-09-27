#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H
#include <iostream>
#include <limits>

class DeviceBaseClass
{

public:
    DeviceBaseClass();
    ~DeviceBaseClass();

    void setDeviceID();
    short getDeviceID();

protected:
    short deviceID;

};

#endif // DEVICEBASECLASS_H
