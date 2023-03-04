set(MODULE_NAME visionary_common)
set(MODULE_3RD_PARTY_LIBS)

set(MODULE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/define"
    "${CMAKE_CURRENT_SOURCE_DIR}/log"
    "${CMAKE_CURRENT_SOURCE_DIR}/utils"
)

file(GLOB MODULE_SRC "define/*.cpp"
                     "log/*.cpp"
                     "utils/*.cpp")

file(GLOB MODULE_PUBLIC_HEADER
    "${CMAKE_CURRENT_SOURCE_DIR}/define/visionary_assertion.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/define/visionary_define.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/log/visionary_log.hpp"
)

add_library(${MODULE_NAME} STATIC ${MODULE_SRC})

target_include_directories(${MODULE_NAME} PUBLIC ${MODULE_INCLUDES})