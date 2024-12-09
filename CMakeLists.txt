cmake_minimum_required(VERSION 3.15)


list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}/generators)
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}/generators)

message(STATUS "### ${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}")

project(mypkg CXX)

find_package(ZLIB)

add_executable(mypkg src/mypkg.cpp src/main.cpp)



install(TARGETS mypkg DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
