#ifndef DESIGNPATTERNS_WINDOWSRENDERER_H
#define DESIGNPATTERNS_WINDOWSRENDERER_H

#include <iostream>

#include "Creational/FactoryMethod/RendererAPI.h"

class WindowsRenderer : public RendererAPI {
public:
    void render() override;
};


#endif //DESIGNPATTERNS_WINDOWSRENDERER_H
