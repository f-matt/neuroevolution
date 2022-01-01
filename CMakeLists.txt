cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project (neuroevolution)

find_package(PkgConfig REQUIRED)

add_executable(neuroevolution src/main.c src/processing-unit.c)

