project(plusminus)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(plusminus_SRCS plusminus.cpp main.cpp)
qt4_automoc(${plusminus_SRCS})
add_executable(plusminus ${plusminus_SRCS})
target_link_libraries(plusminus ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
install(TARGETS plusminus RUNTIME DESTINATION bin)
