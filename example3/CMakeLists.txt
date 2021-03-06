cmake_minimum_required(VERSION 3.17)
project(example3)

add_executable(example3 src/main.cpp src/core.hpp src/class_a.cpp src/class_b.cpp)
target_include_directories(example3 PUBLIC src/)

# Include "core.hpp" in every file.
# Acts as if '#include "core.hpp"' was added before first line of every file (yes, the "..." variant and not <...> one).
# If PRIVATE then it works only from inside this project and may break when used in header.
# Can be used for global macros and includes (such as <iostream>, <cstdint> or <string>)
if(MSVC)
    target_compile_options(example3 PUBLIC /FI"core.hpp") # This one was not tested yet as I am using GCC under Linux
else()
    # GCC or Clang
    target_compile_options(example3 PUBLIC --include "core.hpp")
endif()