cmake_minimum_required(VERSION 3.15)
project(learn_cpp_with_cpp_primer)

set(CMAKE_CXX_STANDARD 11)

add_executable(learn_cpp_with_cpp_primer
        main.cpp
        ch1_getting_started.cpp
        ch1_getting_started.h
        ch2_variables_and_basic_types.cpp
        ch2_variables_and_basic_types.h
        ch3_strings_vectors_and_arrays.cpp
        ch3_strings_vectors_and_arrays.h
        transaction_processing.cpp
        transaction_processing.h
        Sales_data.cpp
        Sales_data.h
        Screen.h
        Screen.cpp
        ch10_generic_algorithms.cpp
        ch10_generic_algorithms.h
        ch11_associative_containers.cpp
        ch11_associative_containers.h)