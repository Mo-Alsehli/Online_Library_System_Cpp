cmake_minimum_required(VERSION 3.10)

# Set policy CMP0048 to NEW
if(POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif()

# Get the current directory name as the project name
get_filename_component(PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)
# Set the project name and version

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES C CXX)

# Include the Includes folder
include_directories(Includes)

# Enable CTest and testing
include(CTest)
enable_testing()

# Automatically find all .cpp in /src
file(GLOB SOURCES "src/*.cpp")

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Set the C++ standard to C++20
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

# Ensure the Includes directory is included
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Includes)