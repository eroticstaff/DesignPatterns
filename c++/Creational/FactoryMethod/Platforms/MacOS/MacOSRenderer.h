#ifndef DESIGNPATTERNS_MACOSRENDERER_H
#define DESIGNPATTERNS_MACOSRENDERER_H

#include <iostream>

#include "Creational/FactoryMethod/RendererAPI.h"

class MacOSRenderer : public RendererAPI {
public:
    void render() override;
};


#endif //DESIGNPATTERNS_MACOSRENDERER_H
