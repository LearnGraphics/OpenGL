cmake_minimum_required(VERSION 3.16)

project(OpenGL)

set(CMAKE_CXX_STANDARD 11)

include_directories(open_source/glfw/glfw-3.3.2.bin.WIN64/include)

add_executable(OpenGL main.cpp)

link_directories(open_source/glfw/glfw-3.3.2.bin.WIN64/lib-vc2019)

link_libraries(glfw3)