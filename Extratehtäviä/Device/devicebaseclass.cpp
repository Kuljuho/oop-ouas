#include "devicebaseclass.h"
#include <iostream>

DeviceBaseClass::DeviceBaseClass()
{

}

DeviceBaseClass::~DeviceBaseClass()
{

}

void DeviceBaseClass::setDeviceID()
{
    while(true)
    {
        std::cout<<"Anna device ID (integer): "<<std::endl;
        std::cin >> deviceID;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
