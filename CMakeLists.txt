# Set variables
set(PROJECT_NAME VulkanStarter)

# C++ 20+
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set a minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Library Specific
# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# Packages
# Vulkan
set(VULKAN_SDK "C:/VulkanSDK")
set(VULKAN_VERSION "1.3.236.0")
set(VULKAN_PATH "${VULKAN_SDK}/${VULKAN_VERSION}")
set(VULKAN_INCLUDE_DIR "${VULKAN_SDK}/${VULKAN_VERSION}/Include")
set(VULKAN_LIB_LIST "vulkan-1.lib")

project(${PROJECT_NAME} VERSION 1.0)

# Create an executable for your project
# Find all cpp and header files in `\src\` folder  
file(GLOB src
     "src/*.h"
     "src/*.cpp"
     "include/imgui/**.cpp"
     "include/imgui/**.h"
)
add_executable(${PROJECT_NAME} ${src})

# Dependencies
find_package(Vulkan REQUIRED)
add_subdirectory(external/glfw)
include_directories(include/imgui)
include_directories(${VULKAN_INCLUDE_DIR})

# target_include_directories(${PROJECT_NAME} 
#   PUBLIC ${VULKAN_INCLUDE_DIR})
  
# link_directories(${VULKAN_PATH}/Bin;${VULKAN_PATH}/Lib;)

# Libraries
set(GLFW_SOURCES libs/glfw/lib-vc2022/glfw3.lib)
target_link_libraries(
    ${PROJECT_NAME} 
    glfw 
)
target_link_libraries(
    ${PROJECT_NAME} 
    ${VULKAN_PATH}/Lib/${VULKAN_LIB_LIST}
)