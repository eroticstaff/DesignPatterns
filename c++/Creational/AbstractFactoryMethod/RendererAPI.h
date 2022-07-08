#ifndef DESIGNPATTERNS_ANOTHERRENDERERAPI_H
#define DESIGNPATTERNS_ANOTHERRENDERERAPI_H

#include <iostream>
#include <memory>

#include "Creational/AbstractFactoryMethod/UIComponents/Button.h"
#include "Creational/AbstractFactoryMethod/UIComponents/Input.h"

enum class AnotherRenderingApi{
    MacOS,
    Windows
};

template <typename T>
using Ref = std::shared_ptr<T>;

class AnotherRendererAPI {
public:

    AnotherRendererAPI() = default;
    virtual ~AnotherRendererAPI() = default;
    virtual Ref<Button> createButton() = 0;
    virtual Ref<Input> createInput() = 0;
    virtual void render() = 0;
};



#endif //DESIGNPATTERNS_ANOTHERRENDERERAPI_H
