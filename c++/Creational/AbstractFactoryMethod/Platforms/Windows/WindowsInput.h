#ifndef DESIGNPATTERNS_WINDOWSINPUT_H
#define DESIGNPATTERNS_WINDOWSINPUT_H

#include <iostream>

#include "Creational/AbstractFactoryMethod/UIComponents/Input.h"

class WindowsInput: public Input{
public:
    void onInput() override;
};



#endif //DESIGNPATTERNS_WINDOWSINPUT_H
