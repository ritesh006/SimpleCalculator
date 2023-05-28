project(simple_calculator)  

add_library(calculationChoice calculationChoice.c)


target_include_directories(calculationChoice 
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/../include
)
