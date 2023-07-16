cmake_minimum_required(VERSION 3.22.0)

project(task_solve)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

FILE(GLOB LIB_SOURCES lib/*.cpp)
add_library(figure_lib SHARED ${LIB_SOURCES})

add_executable(task_solve client/main.cpp)

target_include_directories(figure_lib PUBLIC lib)
target_link_libraries(task_solve figure_lib)



