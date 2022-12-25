# Set a variable with the project name
set(PROJECT_NAME vulkan-starter)

# C++ 20+
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set a minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Name your project (no spaces)
# Version is optional
project(${PROJECT_NAME} VERSION 1.0)

# Create an executable for your project
add_executable(VulkanStarter src/main.cpp)