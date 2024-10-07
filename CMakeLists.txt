cmake_minimum_required(VERSION 3.10)

project(libiconv)
include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/libiconv ${PROJECT_SOURCE_DIR}/libiconv/include ${PROJECT_SOURCE_DIR}/libiconv/libcharset/include)
#target_compile_options(${PROJECT_NAME} PRIVATE /wd4311;4244;4117;4090;4267;4273;4018)
add_definitions(-D_CRT_SECURE_NO_WARNINGS -DUSING_STATIC_LIBICONV -DUNICODE -D_UNICODE -D_LIB)
add_library(${PROJECT_NAME} STATIC ${PROJECT_SOURCE_DIR}/libiconv/libcharset/lib/localcharset.c ${PROJECT_SOURCE_DIR}/libiconv/libcharset/lib/relocatable-stub.c ${PROJECT_SOURCE_DIR}/libiconv/lib/iconv.c ${PROJECT_SOURCE_DIR}/libiconv/lib/relocatable.c)
#target_link_libraries(${PROJECT_NAME} SetupAPI.lib)
