cmake_minimum_required(VERSION 3.6)
project(libvmi_extensions C CXX)

include(${SOURCE_CMAKE_DIR}/project.cmake)
init_project()

add_vmm_executable(
    example_vmm
    SOURCES vmcall_handler.cpp
)
