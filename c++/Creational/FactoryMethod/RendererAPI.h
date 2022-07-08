#ifndef DESIGNPATTERNS_RENDERERAPI_H
#define DESIGNPATTERNS_RENDERERAPI_H

#include <iostream>

enum class RenderingApi{
    MacOS,
    Windows
};

class RendererAPI {
public:
    RendererAPI() = default;
    virtual ~RendererAPI() = default;
    virtual void render() = 0;
};



#endif //DESIGNPATTERNS_RENDERERAPI_H
