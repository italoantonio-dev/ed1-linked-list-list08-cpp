cmake_minimum_required(VERSION 3.20)

project(ed1_linked_list_list08_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(exercicio01 src/Exer01_MiddleNode.cpp)
add_executable(exercicio02 src/Exer02_PalindromeList.cpp)
add_executable(exercicio03 src/Exer03_RemoveDuplicates.cpp)
add_executable(exercicio04 src/Exer04_OddEvenList.cpp)
add_executable(exercicio05 src/Exer05_AddTwoNumbers.cpp)

target_include_directories(exercicio01 PRIVATE include)
target_include_directories(exercicio02 PRIVATE include)
target_include_directories(exercicio03 PRIVATE include)
target_include_directories(exercicio04 PRIVATE include)
target_include_directories(exercicio05 PRIVATE include)