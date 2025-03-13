#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <variant>
#include <string>

class Calculator {
public:
    static double add(double x, double y);
    static double subtract(double x, double y);
    static double multiply(double x, double y);
    static std::variant<double, std::string> divide(double x, double y);
};

#endif // CALCULATOR_HPP
