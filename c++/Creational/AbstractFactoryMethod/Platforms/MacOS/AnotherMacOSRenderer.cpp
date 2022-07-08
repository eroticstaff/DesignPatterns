#include "AnotherMacOSRenderer.h"

void AnotherMacOSRenderer::render() {
    std::cout << "MacOS renderer called" << std::endl;
}

Ref<Button> AnotherMacOSRenderer::createButton() {
    return std::make_shared<MacOSButton>();
}

Ref<Input> AnotherMacOSRenderer::createInput() {
    return std::make_shared<MacOSInput>();
}
