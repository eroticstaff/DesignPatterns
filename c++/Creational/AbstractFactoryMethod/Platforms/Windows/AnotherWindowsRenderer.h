#ifndef DESIGNPATTERNS_ANOTHERWINDOWSRENDERER_H
#define DESIGNPATTERNS_ANOTHERWINDOWSRENDERER_H

#include <iostream>

#include "WindowsButton.h"
#include "WindowsInput.h"
#include "Creational/AbstractFactoryMethod/RendererAPI.h"

class AnotherWindowsRenderer : public AnotherRendererAPI {
public:

    void render() override;
    Ref<Button> createButton() override;
    Ref<Input> createInput() override;
};


#endif //DESIGNPATTERNS_ANOTHERWINDOWSRENDERER_H
