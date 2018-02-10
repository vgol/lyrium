cmake_minimum_required(VERSION 3.9)

project(lyrium)

set(CMAKE_CXX_STANDARD 17)

include_directories(../Boost/include/boost-1_66)


add_subdirectory(src)
add_subdirectory(test)
