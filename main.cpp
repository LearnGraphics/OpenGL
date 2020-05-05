#include <iostream>
#include "GLFW/glfw3.h"

void GlfwErrorCbf(int errorCode, const char* description)
{
    std::cout << "ErrorCode=" << errorCode << " Description=" << description << std::endl;
}

int main() {

    if (glfwSetErrorCallback(GlfwErrorCbf) );

    glfwInit();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
