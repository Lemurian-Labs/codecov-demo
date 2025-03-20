#include "calculator.hpp"

double Calculator::add(double x, double y) {
    return x + y;
}

double Calculator::subtract(double x, double y) {
    return x - y;
}

double Calculator::multiply(double x, double y) {
    return x * y;
}

std::variant<double, std::string> Calculator::divide(double x, double y) {
    if (y == 0) {
        return std::string("Cannot divide by zero");
    }
    return x / y;
}
