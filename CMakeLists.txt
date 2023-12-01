cmake_minimum_required(VERSION 3.26)
project(lab3)

set(CMAKE_CXX_STANDARD 20)

add_library(Map INTERFACE headers/Map.h cppFiles/Map.tcc)
add_library(Bucket INTERFACE headers/Bucket.h cppFiles/Bucket.tcc)
link_libraries(Map Bucket)

add_executable(main cppFiles/main.cpp)

target_link_libraries(main Map Bucket)
