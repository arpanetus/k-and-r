cmake_minimum_required(VERSION 3.0.0)
project(K_AND_R VERSION 0.1.0)

set(CMAKE_C_STANDARD 99)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "built")
include(CPack)

file(GLOB SOURCE_FILES src/*.c)

foreach(SOURCE_PATH ${SOURCE_FILES})
    get_filename_component(
        EXECUTABLE_NAME 
        ${SOURCE_PATH} 
        NAME_WE)
    
    # set(CUR_EX  ${EXECUTABLE_NAME}.out)
    message("TO-COMPILE: ${SOURCE_PATH}")
    add_executable(${EXECUTABLE_NAME}.out ${SOURCE_PATH})

endforeach(SOURCE_PATH ${SOURCE_FILES})