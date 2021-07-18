
cmake_minimum_required(VERSION 3.12)
project(mytestproj VERSION 1.0.0 LANGUAGES CXX)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED on)
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# include_directories(./include/greet)
# set(HELLO_SRC hello/greet.cpp)
# add_executable(hello hello.cpp ${HELLO_SRC})


add_subdirectory(include)

add_executable(main main.cpp)
target_link_libraries(main greet)
