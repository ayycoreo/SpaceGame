# what us CMakeLists and is important w/ c++ projects

# A CMakeLists.txt file is a configuration file used by CMake, a popular cross-platform build system for C++ (and other languages). 
# It describes how to build your project: which source files to compile, what libraries to link, what compiler options to use, and more.

# Why is it important for C++ projects?

# Portability: Makes it easier to build your project on different platforms (Windows, Linux, macOS).
# Automation: Automates the build process, so you don’t have to write platform-specific build scripts.
# Integration: Works well with IDEs like Visual Studio Code, CLion, and Visual Studio.
# Dependency Management: Can automatically download and build dependencies.

cmake_minimum_required(VERSION 3.10)
project(CPPNotes)
set(CMAKE_CXX_STANDARD 17)

# Add all source files here
add_executable(CPPGaming main.cpp)   # Update this with the actual code files 

# Enable unity build if supported (CMake 3.16+)
if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.16")
    set_target_properties(CPPGaming PROPERTIES
        UNITY_BUILD ON
        UNITY_BUILD_MODE BATCH
        UNITY_BUILD_BATCH_SIZE 10
    )
endif()

# Platform-specific settings
if (WIN32)
    # Windows-specific settings can go here
elseif(APPLE)
    # macOS-specific settings can go here
endif()


# CMake’s built-in unity build feature (UNITY_BUILD) supports two build modes:

#  1. BATCH
# Multiple source files are combined into a single compilation unit in batches.
# The batch size is controlled by UNITY_BUILD_BATCH_SIZE.

#  2. GROUP
# Source files are grouped by their source group (e.g., folder or logical group in CMake).
# All files in a group are combined into a single compilation unit.