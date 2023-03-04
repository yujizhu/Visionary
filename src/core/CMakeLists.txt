set(MODULE_NAME visionary_core)
set(MODULE_3RD_PARTY_LIBS vulkan)

set(MODULE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend"
)

file(GLOB MODULE_SRC "*.cpp")

file(GLOB VULKAN_BACKEND_SRC "${CMAKE_CURRENT_SOURCE_DIR}/backend/vulkan/*.cpp")

list(APPEND MODULE_SRC ${VULKAN_BACKEND_SRC})

add_library(${MODULE_NAME} STATIC ${MODULE_SRC})

target_include_directories(${MODULE_NAME} PUBLIC ${MODULE_INCLUDES})

target_link_libraries(${MODULE_NAME} PRIVATE visionary_common ${MODULE_3RD_PARTY_LIBS})