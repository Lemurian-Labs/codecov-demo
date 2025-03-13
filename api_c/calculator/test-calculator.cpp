#include "calculator.hpp"
#include <cassert>
#include <iostream>
#include <variant>

int main() {
    // Test add
    assert(Calculator::add(1, 2) == 3);
    assert(Calculator::add(1.0, 2.0) == 3);
    assert(Calculator::add(0, 2.0) == 2);
    assert(Calculator::add(2.0, 0) == 2);
    assert(Calculator::add(-4, 2.0) == -2);

    // Test subtract
    assert(Calculator::subtract(1, 2) == -1);
    assert(Calculator::subtract(2, 1) == 1);
    assert(Calculator::subtract(1.0, 2.0) == -1);
    assert(Calculator::subtract(0, 2.0) == -2);
    assert(Calculator::subtract(2.0, 0.0) == 2);
    assert(Calculator::subtract(-4, 2.0) == -6);

    // Test multiply
    assert(Calculator::multiply(1, 2) == 2);
    assert(Calculator::multiply(1.0, 2.0) == 2);
    assert(Calculator::multiply(0, 2.0) == 0);
    assert(Calculator::multiply(2.0, 0.0) == 0);
    assert(Calculator::multiply(-4, 2.0) == -8);

    // Test divide with valid numbers
    auto div1 = Calculator::divide(1, 2);
    assert(std::holds_alternative<double>(div1));
    assert(std::get<double>(div1) == 0.5);

    auto div2 = Calculator::divide(1.0, 2.0);
    assert(std::holds_alternative<double>(div2));
    assert(std::get<double>(div2) == 0.5);

    auto div3 = Calculator::divide(0, 2.0);
    assert(std::holds_alternative<double>(div3));
    assert(std::get<double>(div3) == 0);

    auto div4 = Calculator::divide(-4, 2.0);
    assert(std::holds_alternative<double>(div4));
    assert(std::get<double>(div4) == -2);

    // Test divide by zero
    auto div5 = Calculator::divide(2.0, 0);
    assert(std::holds_alternative<std::string>(div5));
    assert(std::get<std::string>(div5) == "Cannot divide by 0");

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
