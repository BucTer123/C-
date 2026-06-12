#include <iostream>
#include <string>
#include <cmath>
#include "calc.h"

void function_calc() {
    std::cout << "Numbers :";
    float a, b;
    std::string c;
    std::cin >> a >> b;
    std::cout << "Operation (+/-/*/ / /** / :";
    std::cin >> c;

    if (c == "+") {
        float plus = a + b;
        std::cout << "A + B = " << plus << std::endl;
    }
    else if (c == "-") {
        float minus = a - b;
        std::cout << "A - B = " << minus << std::endl;
    }
    else if (c == "*") {
        float multiply = a * b;
        std::cout << "A * B = " << multiply << std::endl;
    }
    else if (c == "/") {
        if (a == 0 && b == 0) {
            std::cout << "\033[31m ERROR! \033[0m" << std::endl;
        } else {
            float divide = a / b;
            std::cout << "A / B = " << divide << std::endl;
        }
    }
    else if (c == "**") {
        float powa = pow(a, a);
        std::cout << "A * A = " << powa << std::endl;
        float powb = pow(b, b);
        std::cout << "B * B = " << powb << std::endl;
    }

}