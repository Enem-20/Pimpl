cmake_minimum_required(VERSION 3.21)

project(Pimpl LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS src/*.hpp)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(Pimpl INTERFACE)

message(HEADERS: ${HEADERS})

target_sources(Pimpl INTERFACE ${HEADERS})
target_include_directories(Pimpl INTERFACE ${HEADERS})