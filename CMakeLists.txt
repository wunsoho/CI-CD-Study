SET(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)
SET(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)

cmake_minimum_required(VERSION 3.25)
project(googletest_sample)

include(FetchContent)
FetchContent_Declare(googletest
	GIT_REPOSITORY https://github.com/google/googletest
	GIT_TAG release-1.11.0)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
   FetchContent_Populate(googletest)
   add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

add_library(sumLibrary STATIC sum.cpp)
add_executable(mainApp main.cpp)
target_link_libraries(mainApp sumLibrary)

add_executable(testRunner sum_test.cpp)
target_link_libraries(testRunner sumLibrary gtest_main gmock_main)