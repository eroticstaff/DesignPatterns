#ifndef DESIGNPATTERNS_WINDOWSBUTTON_H
#define DESIGNPATTERNS_WINDOWSBUTTON_H

#include <iostream>

#include "Creational/AbstractFactoryMethod/UIComponents/Button.h"

class WindowsButton : public Button{
public:
    void onClick() override;
};



#endif //DESIGNPATTERNS_WINDOWSBUTTON_H
