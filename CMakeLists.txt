cmake_minimum_required(VERSION 3.0.0)
project(Complex)

include_directories(${PROJECT_SOURCE_DIR}/src)
add_library(COMPLEX_LIB SHARED "src/Complex.cpp" )

add_executable(test "./test.cpp")
target_link_libraries(test COMPLEX_LIB)