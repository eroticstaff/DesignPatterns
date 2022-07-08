#ifndef DESIGNPATTERNS_ABSTRACTFACTORYMETHOD_H
#define DESIGNPATTERNS_ABSTRACTFACTORYMETHOD_H

#include <memory>

#include "RendererAPI.h"
#include "Creational/AbstractFactoryMethod/Platforms/MacOS/AnotherMacOSRenderer.h"
#include "Creational/AbstractFactoryMethod/Platforms/Windows/AnotherWindowsRenderer.h"

class AbstractFactoryMethod {
public:
    static void test();
};


#endif //DESIGNPATTERNS_ABSTRACTFACTORYMETHOD_H
