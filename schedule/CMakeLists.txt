project(schedule)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(schedule_SRCS schedule.cpp main.cpp)
qt4_automoc(${schedule_SRCS})
add_executable(schedule ${schedule_SRCS})
target_link_libraries(schedule ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
install(TARGETS schedule RUNTIME DESTINATION bin)
