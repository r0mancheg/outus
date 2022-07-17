cmake_minimum_required(VERSION 3.22)

project(03.homework)

add_executable(training   training.cpp)
add_executable(test   test.cpp)

set_target_properties(training
                      test
                                        
PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)