cmake_minimum_required(VERSION 3.16)

project(Hello VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)

add_library(hello SHARED hello.c)
