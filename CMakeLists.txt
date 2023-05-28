cmake_minimum_required(VERSION 3.15) #version that required process

project(simpleCalculator)            #project name


add_library(calc myLib/driverCode.c) #calc is a lib name 

add_executable(a.out main.c)

target_link_libraries(a.out calc)
