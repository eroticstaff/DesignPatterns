#ifndef DESIGNPATTERNS_MACOSINPUT_H
#define DESIGNPATTERNS_MACOSINPUT_H

#include <iostream>

#include "Creational/AbstractFactoryMethod/UIComponents/Input.h"

class MacOSInput: public Input{
public:
    void onInput() override;
};



#endif //DESIGNPATTERNS_MACOSINPUT_H
