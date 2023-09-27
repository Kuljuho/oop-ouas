#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{

}

DeviceDisplay::~DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{
    while(true)
    {
        std::cin >> displayResolution;

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

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
