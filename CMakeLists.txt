cmake_minimum_required(VERSION 3.0.0)
project(K_AND_R VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(K_AND_R 1-1.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
