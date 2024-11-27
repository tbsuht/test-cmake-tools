cmake_minimum_required(VERSION 3.15)
project(mypkg CXX)

find_package(ZLIB)

add_executable(mypkg src/mypkg.cpp src/main.cpp)



install(TARGETS mypkg DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
