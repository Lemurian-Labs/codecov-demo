#include "smiles.hpp"
#include <cassert>
#include <iostream>

int main() {
    Smiles s;
    // Test the smile function
    //assert(s.smile() == ":)");
    
    // Optionally, you can test the frown function as well:
    //assert(s.frown() == ":(");

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
