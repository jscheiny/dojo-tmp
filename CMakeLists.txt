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

# Setup for tests, adapted from:
# https://crascit.com/2015/07/25/cmake-gtest/

# Download and unpack googletest at configure time
# configure_file(CMakeLists.txt.in
#                googletest-download/CMakeLists.txt)
# execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
#   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
# execute_process(COMMAND ${CMAKE_COMMAND} --build .
#   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
 
# # Prevent GoogleTest from overriding our compiler/linker options
# # when building with Visual Studio
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
 
# # Add googletest directly to our build. This adds
# # the following targets: gtest, gtest_main, gmock
# # and gmock_main
# add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
#                  ${CMAKE_BINARY_DIR}/googletest-build)
 
# # The gtest/gmock targets carry header search path
# # dependencies automatically when using CMake 2.8.11 or
# # later. Otherwise we have to add them here ourselves.
# if (CMAKE_VERSION VERSION_LESS 2.8.11)
#   include_directories("${gtest_SOURCE_DIR}/include"
#                       "${gmock_SOURCE_DIR}/include")
# endif()
 
add_executable(tmp src/main.cpp)
target_link_libraries(tmp dojo-tmplib)

# enable_testing()
# add_subdirectory(test)
