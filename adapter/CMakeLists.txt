cmake_minimum_required(VERSION 3.1)
project(adapter_lib
    VERSION 1.0.0
    DESCRIPTION "Adapter library"
    LANGUAGES CXX)
add_library(adapter STATIC Shape.cpp Point.cpp)
target_compile_features(adapter PRIVATE cxx_std_11)
target_include_directories(adapter INTERFACE .)
set_target_properties(adapter PROPERTIES VERSION ${PROJECT_VERSION})