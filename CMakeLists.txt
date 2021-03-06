cmake_minimum_required(VERSION 3.17)
project(include_example)

add_subdirectory(example1) # Define
add_subdirectory(example2) # Define + core.hpp in CMakeLists.txt

add_subdirectory(example3) # Class