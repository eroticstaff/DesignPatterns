#include "FactoryMethod.h"

void FactoryMethod::test() {
    RenderingApi renderingApi = RenderingApi::Windows;
    std::shared_ptr<RendererAPI> renderer;
    switch (renderingApi) {
        case RenderingApi::MacOS:
            renderer = std::make_shared<MacOSRenderer>();
            break;
        case RenderingApi::Windows:
            renderer = std::make_shared<WindowsRenderer>();
            break;
        default:
            throw std::runtime_error("No such RenderingApi!");
    }
    renderer->render();
}
