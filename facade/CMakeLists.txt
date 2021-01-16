cmake_minimum_required(VERSION 3.1)
project(facade_lib
    VERSION 1.0.0
    DESCRIPTION "Facade library"
    # URL関係のライブラリをインストールしないと動かないことがあるので
    # コメントアウトしておきます(2019/12/02 修正)
    # HOMEPAGE_URL "https://example.com"
    LANGUAGES CXX)
add_library(facade STATIC databasefacade.cpp element.cpp model.cpp database.cpp)
target_compile_features(facade PRIVATE cxx_std_11)
target_include_directories(facade INTERFACE .)
set_target_properties(facade PROPERTIES VERSION ${PROJECT_VERSION})