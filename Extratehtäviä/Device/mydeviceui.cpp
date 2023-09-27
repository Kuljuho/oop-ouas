#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;

}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
    objectDeviceMouse = nullptr;
    objectDeviceTouchPad = nullptr;
    objectDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    int userChoice = 0;
    while(userChoice != 6)
    {
        std::cout<<"DEVICE MENU"<<std::endl;
        std::cout<<"==========="<<std::endl;

        std::cout<<"1: Set Mouse Information"<<std::endl;
        std::cout<<"2: Set Touchpad Information"<<std::endl;
        std::cout<<"3: Set Display Information"<<std::endl;
        std::cout<<"4: Set Device ID"<<std::endl;
        std::cout<<"5: Show Device Information"<<std::endl;
        std::cout<<"6: Finish"<<std::endl;
        std::cin>>userChoice;

        if (userChoice == 1)
        {
            uiSetMouseInformation();
        } else if (userChoice == 2)
        {
            uiSetTouchPadInformation();
        } else if (userChoice == 3)
        {
            uiSetDisplayInformation();
        } else if (userChoice == 4)
        {
            objectDeviceMouse->setDeviceID();
        } else if (userChoice == 5)
        {
            uiShowDeviceInformation();
        } else
        {
            break;
        }

    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    std::cout<<"SET MOUSE INFORMATION"<<std::endl;
    std::cout<<"====================="<<std::endl;

    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    std::cout<<"SET TOUCHPAD INFORMATION"<<std::endl;
    std::cout<<"========================"<<std::endl;
    std::cout<<"Set Touchpad Sensitivity: "<<std::endl;
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    std::cout<<"SET DISPLAY INFORMATION"<<std::endl;
    std::cout<<"======================="<<std::endl;
    std::cout<<"Set Display Resolution: "<<std::endl;
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    std::cout<<"DEVICE INFORMATION"<<std::endl;
    std::cout<<"=================="<<std::endl;
    std::cout<<"Device ID: "<< objectDeviceMouse->getDeviceID() <<std::endl;
    std::cout<<"Display Resolution:"<<objectDeviceDisplay->getDisplayResolution()<<std::endl;
    std::cout<<"Mouse ID: "<<objectDeviceMouse->getPrimaryButton()<<std::endl;
    std::cout<<"Mouse primary button: "<<objectDeviceMouse->getPrimaryButton()<<std::endl;
    std::cout<<"Touchpad sensitivity: "<< objectDeviceTouchPad->getTouchPadSensitivity() <<std::endl;
    return;
}
