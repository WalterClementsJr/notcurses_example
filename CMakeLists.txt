cmake_minimum_required(VERSION 3.10)
project(NotCursesDemo)

find_package(PkgConfig REQUIRED)
pkg_check_modules(NOTCURSES REQUIRED notcurses++)

add_executable(tetris tetris/main.cpp)

target_include_directories(tetris PRIVATE ${NOTCURSES_INCLUDE_DIRS})
target_link_libraries(tetris PRIVATE ${NOTCURSES_LIBRARIES})
