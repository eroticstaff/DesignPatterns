#ifndef DESIGNPATTERNS_FACTORYMETHOD_H
#define DESIGNPATTERNS_FACTORYMETHOD_H

#include <memory>

#include "RendererAPI.h"
#include "Creational/FactoryMethod/Platforms/MacOS/MacOSRenderer.h"
#include "Creational/FactoryMethod/Platforms/Windows/WindowsRenderer.h"

class FactoryMethod {
public:
    static void test();
};


#endif //DESIGNPATTERNS_FACTORYMETHOD_H
