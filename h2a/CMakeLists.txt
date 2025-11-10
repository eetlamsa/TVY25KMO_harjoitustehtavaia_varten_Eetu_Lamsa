cmake_minimum_required(VERSION 3.16)

project(h2a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2a main.cpp
    Car.h
    Car.cpp
    Rectangle.h
    Student.h
    Rectangle.cpp
    Student.cpp)

include(GNUInstallDirs)
install(TARGETS h2a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
