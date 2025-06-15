cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Benchmark)

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)

# Ajouter l'exécutable
add_executable(main_list main_list.cpp)
add_executable(main_vector main_vector.cpp)
add_executable(main_vector_reserve main_vector_reserve.cpp)
add_executable(main_array main_array.cpp)
