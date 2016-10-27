cmake_minimum_required(VERSION 2.8.7)

# Project
project(DojoTMP)

# Set flags
function(add_cxx_flags extras)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${extras}" PARENT_SCOPE)
endfunction(add_cxx_flags)

add_cxx_flags("-g -Wall -std=c++1y -stdlib=libc++ -Wno-unused-function -pipe")

# TODO: Make the following more granular once there's wider compiler support for
# c++14. Note that the absence of "-g" is intentional as the current version of
# clang (3.4) does not support emitting debug info for auto member functions.
# Set flags
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -fno-inline")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3 -march=native -DNDEBUG")

include_directories(src)
add_subdirectory(src)
 
add_executable(tmp src/main.cpp)
target_link_libraries(tmp dojo-tmplib)
