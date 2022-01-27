cmake_minimum_required(VERSION 3.16)

project(Test VERSION 0.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Is this a comment?
add_executable(Test main.cpp)
configure_file(Config.h.in Config.h)
target_include_directories(Test PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
