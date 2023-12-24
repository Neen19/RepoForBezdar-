cmake_minimum_required(VERSION 3.26)
project(lab3)


set(CMAKE_CXX_STANDARD 20)

add_compile_options(--coverage)
add_link_options(--coverage)


add_library(Map INTERFACE headers/Map.h cppfiles/Map.tcc)
add_library(Bucket INTERFACE headers/Bucket.h cppfiles/Bucket.tcc)
add_library(NewsAgency headers/agencies/NewsAgency.h cppfiles/agencies/NewsAgency.cpp)
add_library(App headers/App.h cppfiles/App.cpp)
add_library(Radio headers/agencies/Radio.h cppfiles/agencies/Radio.cpp)
add_library(Seal headers/agencies/Seal.h cppfiles/agencies/Seal.cpp)

link_libraries(Map Bucket NewsAgency App Radio Seal)

add_executable(test tests/Test.cpp)
add_executable(main cppfiles/main.cpp)

target_link_libraries(test Map Bucket NewsAgency App Radio Seal)
target_link_libraries(main Map Bucket NewsAgency App Radio Seal)
