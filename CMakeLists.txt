# Set variables
set(PROJECT_NAME vulkan-starter)
set(PROJECT_EXE VulkanStarter)

# C++ 20+
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Library Specific
# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# Set a minimum version of CMake
cmake_minimum_required(VERSION 3.10)

project(${PROJECT_NAME} VERSION 1.0)

# Create an executable for your project
# Find all cpp and header files in `\src\` folder  
file(GLOB src
     "src/*.h"
     "src/*.cpp"
)
add_executable(${PROJECT_EXE} ${src})

# Dependencies
add_subdirectory(external/glfw)
include_directories(external/imgui)
# include_directories(include)

# Libraries
set(GLFW_SOURCES libs/glfw/lib-vc2022/glfw3.lib)
target_link_libraries(${PROJECT_EXE} glfw)