#ifndef DESIGNPATTERNS_ANOTHERMACOSRENDERER_H
#define DESIGNPATTERNS_ANOTHERMACOSRENDERER_H

#include <iostream>

#include "Creational/AbstractFactoryMethod/RendererAPI.h"
#include "MacOSButton.h"
#include "MacOSInput.h"

class AnotherMacOSRenderer : public AnotherRendererAPI {
public:
    void render() override;
    Ref<Button> createButton() override;
    Ref<Input> createInput() override;
};


#endif //DESIGNPATTERNS_ANOTHERMACOSRENDERER_H
