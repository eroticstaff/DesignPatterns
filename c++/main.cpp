#include <iostream>

#include "./Creational/FactoryMethod/FactoryMethod.h"
#include "./Creational/AbstractFactoryMethod/AbstractFactoryMethod.h"

int main() {
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "Creational Patterns:" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << std::endl;

    std::cout << "===============================" << std::endl;
    std::cout << "Factory Method Test:" << std::endl;
    std::cout << "===============================" << std::endl;

    FactoryMethod::test();

    std::cout << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << "Abstract Factory Test:" << std::endl;
    std::cout << "===============================" << std::endl;

    AbstractFactoryMethod::test();
}