cmake_minimum_required(VERSION 3.1)
project(control_rx)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-O3")        ## Optimize

set(SOURCE_FILES
        db_protocol.h
        main.c)

add_executable(control_rx ${SOURCE_FILES})
