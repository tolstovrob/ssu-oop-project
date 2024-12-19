cmake_minimum_required(VERSION 3.28.3)

project(CourseManagement VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

add_executable(main src/main.cpp)