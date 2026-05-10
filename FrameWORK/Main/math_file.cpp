#include <iostream>
#include <cmath>
#include <string>
#include "math_file.h"

void math_function() {
	std::cout << "Write first number :";
	float a;
	std::cin >> a;
	std::cout << "Write second number :";
	float b;
	std::cin >> b;
	std::cout << "> ";
	std::string c;
	std::cin >> c;
	
	if (c == "hlp_mth") {
		std::cout << "\033[33m 1 => hlp_mth \033[0m" << std::endl;
		std::cout << "\033[33m 2 => +(plus) \033[0m" << std::endl;
		std::cout << "\033[33m 3 => -(minus) \033[0m" << std::endl;
		std::cout << "\033[33m 4 => *(multiply/multi) \033[0m" << std::endl;
		std::cout << "\033[33m 5 => /(divide) \033[0m" << std::endl;
		std::cout << "\033[33m 6 => sin(sinus) \033[0m" << std::endl;
		std::cout << "\033[33m 7 => cos(cosinus) \033[0m" << std::endl;
		std::cout << "\033[33m 8 => **(power/pow) \033[0m" << std::endl;
	}
	else if (c == "+" || c == "plus") {
		float plus = a + b;
		std::cout << "A + B =" <<  plus << std::endl;
	} 
	else if (c == "-" || c == "minus") {
		float minus = a - b;
		std::cout << "A - B =" << minus << std::endl; 
	}
	else if (c == "*" || c == "multiply" || c == "multi") {
		float multiply = a * b;
		std::cout << "A * B =" << multiply << std::endl;
	}
	else if (c == "/" || c == "divide") {
		if (b == 0 || a == 0) {
			std::cout << "\033[31m ERROR!: Divide by zero! \033[0m" << std::endl;
			break
		} else {
			float divide = a / b;
			std::cout << "A / B =" << divide << std::endl;
		}
	}
	else if (c == "sin" || c == "sinus") {
		float sina = sinf(a);
		float sinb = sinf(b);
		
		std::cout << "Sin(a) =" << sina << std::endl;
		std::cout << "Sin(b) =" << sinb << std::endl;
	}
	else if (c == "cos" || c == "cosinus") {
		float cosa = cosf(a);
		float cosb = cosf(b);
		
		std::cout << "Cos(a) =" << cosa << std::endl;
		std::cout << "Cos(b) =" << cosb << std::endl;
	}
	else if (c == "**" || c == "power" || c == "pow") {
		float powa = pow(a);
		float powb = pow(b);
		
		std::cout << "Power(a) =" << powa << std::endl;
		std::cout << "Power(b) =" << powb << std::endl;
	}
}