#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

DeviceMouse::~DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    while(true)
    {
        std::cout<<"Set Mouse Primary Button (integer): ";
        std::cin >> primaryButton;

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

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
