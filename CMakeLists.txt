cmake_minimum_required(VERSION 3.21)

project(Pimpl LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(Pimpl INTERFACE)

target_compile_definitions(Pimpl INTERFACE PIMPL_EXPORTS)
target_include_directories(Pimpl INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)