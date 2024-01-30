cmake_minimum_required(VERSION 3.15)
project(simple CXX)


add_library(simple src/simple.cpp)
target_include_directories(simple PUBLIC include)

set_target_properties(simple PROPERTIES PUBLIC_HEADER "include/simple.h")
install(TARGETS simple)
