# Build the test-calculator executable
set(CALCULATOR_SOURCES
    calculator.cpp
    test-calculator.cpp
)

add_executable(test-calculator ${CALCULATOR_SOURCES})

# Specify the include directory (the current source directory)
# target_include_directories(test-calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link coverage flags so we can generate .gcno/.gcda files
target_compile_options(test-calculator PRIVATE --coverage)
target_link_libraries(test-calculator PRIVATE --coverage)
