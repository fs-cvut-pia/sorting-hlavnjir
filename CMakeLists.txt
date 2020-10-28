cmake_minimum_required(VERSION 3.16)
project(sorting_hlavnjir_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sorting_hlavnjir_main
        jmena.dat
        jmena2.dat
        main.cpp
        README.md
        trideni.cpp
        trideni.h)
