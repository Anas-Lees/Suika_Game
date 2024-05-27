cmake_minimum_required(VERSION 3.26)
project(Suika_Game)

set(CMAKE_CXX_STANDARD 20)

# Set SFML_ROOT to the path where SFML is installed
set(SFML_ROOT "C:\\Users\\anasn\\Desktop\\SFML-2.6.1")

# Find SFML
set(CMAKE_MODULE_PATH "${SFML_ROOT}/cmake/Modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2.6.1 COMPONENTS system window graphics network audio REQUIRED)

# Define the executable target
add_executable(Suika_Game main.cpp)

# Link SFML libraries
target_link_libraries(Suika_Game sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
