# what us CMakeLists and is important w/ c++ projects

# A CMakeLists.txt file is a configuration file used by CMake, a popular cross-platform build system for C++ (and other languages). 
# It describes how to build your project: which source files to compile, what libraries to link, what compiler options to use, and more.

# Why is it important for C++ projects?

# Portability: Makes it easier to build your project on different platforms (Windows, Linux, macOS).
# Automation: Automates the build process, so you don’t have to write platform-specific build scripts.
# Integration: Works well with IDEs like Visual Studio Code, CLion, and Visual Studio.
# Dependency Management: Can automatically download and build dependencies.
cmake_minimum_required(VERSION 3.10)
project(CPLUSplus)
set(CMAKE_CXX_STANDARD 17)

add_executable(CPLUSplus main.cpp CPPNotes.cpp)  #add the cpp files here to ensure they are built 

set_target_properties(CPLUSplus PROPERTIES
        UNITY_BUILD ON # Enabling unity build can speed up compilation
        UNITY_BUILD_MODE BATCH #  BATCH mode means that multiple sources are combined together into a single compliation unit.
        UNITY_BUILD_BATCH_SIZE 10 ) # the batch size specifies how many source files to combine in one compliation unit.


# CMake’s built-in unity build feature (UNITY_BUILD) supports two build modes:

#  1. BATCH
# Multiple source files are combined into a single compilation unit in batches.
# The batch size is controlled by UNITY_BUILD_BATCH_SIZE.

#  2. GROUP
# Source files are grouped by their source group (e.g., folder or logical group in CMake).
# All files in a group are combined into a single compilation unit.