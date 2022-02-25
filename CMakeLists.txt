cmake_minimum_required(VERSION 3.21)
project(mario)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)
add_executable(mario src/main.cpp src/game.cpp include/game.h src/mario.cpp include/mario.h)
target_link_libraries(mario sfml-graphics sfml-audio)
