cmake_minimum_required(VERSION 3.10)
project(api_c)

set(CMAKE_CXX_STANDARD 17)

# Include the calculator subdirectory
add_subdirectory(calculator)

# Include the smiles subdirectory
add_subdirectory(smiles)