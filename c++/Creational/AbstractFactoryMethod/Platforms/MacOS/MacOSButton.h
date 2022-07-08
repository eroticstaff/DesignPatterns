#ifndef DESIGNPATTERNS_MACOSBUTTON_H
#define DESIGNPATTERNS_MACOSBUTTON_H

#include <iostream>

#include "Creational/AbstractFactoryMethod/UIComponents/Button.h"

class MacOSButton : public Button{
public:
    void onClick() override;
};


#endif //DESIGNPATTERNS_MACOSBUTTON_H
