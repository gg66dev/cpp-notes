cmake_minimum_required(VERSION 3.0)
project(umarlone-example-I)
file(GLOB SOURCES "src/*.h" "src/*.cpp")
add_executable(umarlone-example-I ${SOURCES})
