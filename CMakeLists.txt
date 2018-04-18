cmake_minimum_required(VERSION 3.8)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp InsertionSort.cpp SelectionSort.cpp ChickenAndRubbits.cpp ChickenAndRubbits.h TreeOutSchool.cpp TreeOutSchool.h AssembleBox.cpp AssembleBox.h JosephProblem.cpp JosephProblem.h)

add_executable(algorithm ${SOURCE_FILES})