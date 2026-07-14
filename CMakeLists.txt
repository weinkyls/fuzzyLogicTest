cmake_minimum_required(VERSION 3.10)
project(getCurrentLim C)

# Tell CMake where to find the headers
include_directories("currentLim")

# Gather all the generated .c files
file(GLOB MATLAB_SRC "currentLim/*.c")

# Build them into a static library
add_library(fuzzy_limiter STATIC ${MATLAB_SRC})

# Example of linking it to your main code later:
add_executable(getCurrentLim main.c)
target_link_libraries(getCurrentLim fuzzy_limiter m)