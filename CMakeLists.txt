cmake_minimum_required(VERSION 3.11)
project(loud_speaker LANGUAGES C CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 11) # C++11...

add_library(ekf STATIC ${PROJECT_SOURCE_DIR}/codegen/lib/get_ekf/get_ekf.c)
target_include_directories(ekf PUBLIC ${PROJECT_SOURCE_DIR}/codegen/lib/get_ekf)

add_executable(ekf_test src/ekf_test.cpp)
target_link_libraries(ekf_test ekf)
