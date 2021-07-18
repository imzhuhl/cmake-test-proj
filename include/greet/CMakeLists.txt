
set(target_name "greet")

add_library(${target_name} STATIC greet.cpp)
target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
