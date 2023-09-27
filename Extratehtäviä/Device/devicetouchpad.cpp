#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

DeviceTouchPad::~DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    while(true)
    {
        std::cin >> touchPadSensitivity;

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

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
