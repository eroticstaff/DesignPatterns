#include "AbstractFactoryMethod.h"

void AbstractFactoryMethod::test() {
    AnotherRenderingApi renderingApi = AnotherRenderingApi::MacOS;
    std::shared_ptr<AnotherRendererAPI> renderer;
    switch (renderingApi) {
        case AnotherRenderingApi::MacOS:
            renderer = std::make_shared<AnotherMacOSRenderer>();
            break;
        case AnotherRenderingApi::Windows:
            renderer = std::make_shared<AnotherWindowsRenderer>();
            break;
        default:
            throw std::runtime_error("No such RenderingApi!");
    }
    renderer->render();
    renderer->createButton()->onClick();
    renderer->createInput()->onInput();
}
