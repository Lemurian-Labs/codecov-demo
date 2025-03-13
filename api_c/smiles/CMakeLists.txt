# Build the test-smiles executable
set(SMILES_SOURCES
    smiles.cpp
    test-smiles.cpp
)

add_executable(test-smiles ${SMILES_SOURCES})

# Link coverage flags so we can generate .gcno/.gcda files
target_compile_options(test-smiles PRIVATE --coverage)
target_link_libraries(test-smiles PRIVATE --coverage)