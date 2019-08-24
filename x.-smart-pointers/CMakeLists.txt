cmake_minimum_required(VERSION 3.0)

project(unique_ptr)
add_executable(
    unique_ptr
    uniqueptr_example.cpp
)

project(shared_ptr)
add_executable(
    shared_ptr
    sharedptr_example.cpp
)

project(weak_ptr)
add_executable(
    weak_ptr
    weakptr_example.cpp
)