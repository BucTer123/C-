#include <iostream>
#include <string>

void function_exit() {
    std::cout << "Do you wanna leave ? (y / n ) :";
    std::string exit_question;
    std::cin >> exit_question;

    if (exit_question == "y" && exit_question == "Y") {
        std::cout << "BYE!";
    } else {
        std::cout << "OI BLYAT IDI NAHU";
    }
}