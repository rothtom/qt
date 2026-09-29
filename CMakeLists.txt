cmake_minimum_required(VERSION 4.4.3)


project(Qt VERSION 1.0)


set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS 
    Quick
    Qml
    Widgets
)

qt_policy(SET QTP0001 NEW)

include_directories(include)

add_subdirectory(src)

