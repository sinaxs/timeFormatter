cmake_minimum_required(VERSION 3.12)
project(timeFormatter)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/../)

set(CMAKE_CXX_STANDARD 11)

set(INCLUDE_FILES timeFormatter.h)

set(SOURCE_FILES timeFormatter.cpp)

ADD_LIBRARY(timeFormatter STATIC ${SOURCE_FILES})

install (TARGETS timeFormatter DESTINATION lib)

INSTALL(FILES ${INCLUDE_FILES} DESTINATION include/timeFormatter)
