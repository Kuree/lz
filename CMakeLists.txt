cmake_minimum_required(VERSION 3.2)
project(lz)

add_library(lz src/lz.cc extern/pithy/pithy.c)
target_include_directories(lz PRIVATE extern/pithy)