#include <iostream>
#include "cls.h"
#include <cstdlib>
#include <string>

void function_clear() {
    std::cout << "Do you wanna clear console ? (y / n ) :";
    std::string question;
    std::cin >> question;

    if (question == "y" && question == "Y") {
        system("clear");
    } else {
        exit(0);
    }
}