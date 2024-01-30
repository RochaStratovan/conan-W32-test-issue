cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)

find_package(simple CONFIG REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example simple::simple)
