cmake_minimum_required(VERSION 3.15)
project(plugintmplt)

set(BUILD_EXAMPLES ON)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
    message(ADD PIZda)
endif()



add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE include)