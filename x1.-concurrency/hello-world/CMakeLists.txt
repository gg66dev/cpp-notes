cmake_minimum_required(VERSION 3.0)
project(hello-world)
file(GLOB SOURCES "src/*.h" "src/*.cpp")
add_executable(hello-world ${SOURCES})
