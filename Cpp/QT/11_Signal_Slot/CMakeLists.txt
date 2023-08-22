cmake_minimum_required(VERSION 3.14)

project(11_Signal_Slot LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(11_Signal_Slot
  main.cpp
  source.h
  source.cpp
  destination.cpp
  destination.h
)
target_link_libraries(11_Signal_Slot Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS 11_Signal_Slot
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
