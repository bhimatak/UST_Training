# CMakeList.txt : CMake project for MyProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.

set(CMAKE_CXX_STANDARD 17)

project ("MyProject")

#include_path
include_directories(include)

#Add Library
add_library(mylib src/utils.cpp)


#Main Application
add_executable(MyProject src/main.cpp)
target_link_libraries(MyProject mylib)

#Unit test
enable_testing()
add_executable(MyTests tests/test_main.cpp)
target_link_libraries(MyTests mylib)
add_test(NAME RunMyTests COMMAND MyTests)
