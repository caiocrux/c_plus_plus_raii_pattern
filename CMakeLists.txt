cmake_minimum_required(VERSION 3.22)

project(thread_raii)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

find_package(Threads REQUIRED)

include_directories(include)
include_directories(src)
file(GLOB THREAD_RAII_SRC "src/*.cc")
file(GLOB THREAD_RAII_INC "include/*.hpp")


add_executable( ${PROJECT_NAME} ${THREAD_RAII_SRC} ${THREAD_RAII_INC})
target_link_libraries(${PROJECT_NAME} Threads::Threads)