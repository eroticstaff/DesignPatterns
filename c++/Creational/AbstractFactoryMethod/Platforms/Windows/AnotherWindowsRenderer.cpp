#include "AnotherWindowsRenderer.h"

void AnotherWindowsRenderer::render() {
    std::cout << "Windows renderer called" << std::endl;
}

Ref<Button> AnotherWindowsRenderer::createButton() {
    return std::make_shared<WindowsButton>();
}

Ref<Input> AnotherWindowsRenderer::createInput() {
    return std::make_shared<WindowsInput>();
}
