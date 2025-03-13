[![codecov](https://codecov.io/gh/Lemurian-Labs/codecov-demo/branch/main/graph/badge.svg?token=0NKKUCWFX9)](https://codecov.io/gh/Lemurian-Labs/codecov-demo)

# codecov-demo
This repository is meant to show the features and functionalities of Codecov. You can follow along [here](https://docs.codecov.com/docs/codecov-tutorial).


<!-- add the text how to test locally -->

## Prerequisites

- A C++ compiler supporting C++11 or later (e.g., GCC, Clang)
- (Optional) CMake for building the project

## Building and Running Tests

### Python

    ```bash
    cd api
    pip install -r requirements.txt
    pytest --cov
   ```

### C++
### Using g++ Directly

1. Open your terminal in the repository's root directory.
2. Compile the source files:

   ```bash
   g++ -std=c++11 -o test_smiles Smiles.cpp main.cpp
   ```

3. Run the executable
    ```bash
   ./test_smiles
    ```


### Using CMake

    ```bash
    cd ../api_c
    mkdir build && cd build
    cmake -DCMAKE_BUILD_TYPE=Debug ..
    make
    ./test-calculator
    ./test-smiles
    ```


