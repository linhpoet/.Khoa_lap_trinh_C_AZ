cmake_minimum_required(VERSION 3.14)

project(113_Disconnecting LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(113_Disconnecting
  main.cpp
  station.h
  Radio.h
  Station.cpp
  Radio.cpp

)
target_link_libraries(113_Disconnecting Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS 113_Disconnecting
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
