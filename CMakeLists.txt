cmake_minimum_required(VERSION 3.22)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

include_directories(c++)

FILE(GLOB factory_method "c++/Creational/FactoryMethod/**/*.cpp"  "c++/Creational/FactoryMethod/**/*/*.cpp" "c++/Creational/FactoryMethod/*.cpp"   )
FILE(GLOB abstract_factory_method "c++/Creational/AbstractFactoryMethod/**/*.cpp"  "c++/Creational/AbstractFactoryMethod/**/*/*.cpp" "c++/Creational/AbstractFactoryMethod/*.cpp"  )

add_executable(DesignPatterns ${factory_method} ${abstract_factory_method} "./c++/main.cpp")
