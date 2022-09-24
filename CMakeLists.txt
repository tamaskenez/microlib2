cmake_minimum_required(VERSION 3.1)
project(microlib2)

if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED 1)
endif()

set(CMAKE_DEBUG_POSTFIX _d)

include(cpp_warnings.cmake)
add_compile_options(${PROJECT_WARNING_FLAGS})

add_subdirectory(ul2)
