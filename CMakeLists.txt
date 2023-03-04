cmake_minimum_required(VERSION 3.10.2)
project(visionary)

set(VISIONARY_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(dummy_source "distribute/visionary_lib/visionary_lib.cpp")

include(thirdparty/vulkan.cmake)

include_directories(include/visionary_core)
include_directories(include/visionary_utils)

add_subdirectory(src/common)
add_subdirectory(src/core)

add_library(${PROJECT_NAME} STATIC ${dummy_source})

target_link_libraries(${PROJECT_NAME} PRIVATE visionary_common visionary_core)