cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(task_solve)

add_library(leaver_lib SHARED lib/leaver.cpp lib/leaver.h)

add_executable(task_solve source/client.cpp)
target_include_directories(leaver_lib PUBLIC lib)
target_link_libraries(task_solve leaver_lib)



