cmake_minimum_required(VERSION 3.0.0)
project(testSCChart VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(hello library.hpp library.cpp)

add_executable(testSCChart main.cpp)

target_link_libraries(testSCChart PRIVATE hello)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
