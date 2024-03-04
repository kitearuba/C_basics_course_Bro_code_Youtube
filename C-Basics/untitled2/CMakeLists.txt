cmake_minimum_required(VERSION 3.27)
project(untitled2 C)

# set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD 99)

add_library(C STATIC ex02library.c)

# Replace "your_source_file.c" with the name of your source file
add_executable(${untitled2} hypotenusaRightTria.c)

# Link against the math library
target_link_libraries(${untitled2} m)