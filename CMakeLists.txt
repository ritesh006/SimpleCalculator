cmake_minimum_required(VERSION 3.15) #version that required process

project(simpleCalculator)            #project name


add_library(calc SHARED myLib/driverCode.c) #calc is a lib name 
# here it will generate libcal.so is a static libray
add_executable(a.out main.c)

target_link_libraries(a.out calc)
#linking a.out to lib calc
