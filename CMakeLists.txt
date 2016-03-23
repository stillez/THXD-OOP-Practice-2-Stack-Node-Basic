cmake_minimum_required(VERSION 3.4)
project(OOP_Exam_Stack_Node)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp node.cpp stack.cpp)
add_executable(OOP_Exam_Stack_Node ${SOURCE_FILES})