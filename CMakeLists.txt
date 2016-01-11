cmake_minimum_required(VERSION 3.3)
project(Kernighan_Ritchie_Exercises)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu99")

set(SOURCE_FILES
    Ex1-1.c)
#    Ex1-10.c
#    Ex1-12.c
#    Ex1-13.c
#    Ex1-14.c
#    Ex1-2.c
#    Ex1-3.c
#    Ex1-4.c
#    Ex1-5.c
#    Ex1-6.c
#    Ex1-7.c
#    Ex1-8.c
#    Ex1-9.c)

add_executable(Kernighan_Ritchie_Exercises ${SOURCE_FILES})