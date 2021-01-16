cmake_minimum_required(VERSION 3.1)
project(facade_lib
    VERSION 1.0.0
    DESCRIPTION "Facade library"
    LANGUAGES CXX)
add_library(facade STATIC Databasefacade.cpp Element.cpp Model.cpp Database.cpp)
target_compile_features(facade PRIVATE cxx_std_11)
target_include_directories(facade INTERFACE .)
set_target_properties(facade PROPERTIES VERSION ${PROJECT_VERSION})