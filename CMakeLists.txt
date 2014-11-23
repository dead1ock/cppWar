PROJECT(War)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMake/")

ADD_EXECUTABLE(War src/main.cpp src/card.cpp src/card.h src/queue.h src/queue.cpp src/deck.h src/deck.cpp)