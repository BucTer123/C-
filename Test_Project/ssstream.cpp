#include <iostream>
#include <string>

void echo(std::string cmd) {
    std::cout << cmd << std::endl;
}

void get(std::string inp) {
    std::cout << "> ";
    std::cin.ignore();
    std::getline(std::cin, inp);
}

void create_num(int num) {
    std::cout << num << std::endl;
}

void create_var(std::string vari) {
    std::cout << vari << std::endl;
}

void create_float(float num_flo) {
    std::cout << num_flo << std::endl;
}

void create_double(double num_dbl) {
    std::cout << num_dbl << std::endl;
}

void create_boolean(bool boolean) {
    if (boolean) {
        std::cout << boolean << std::endl;
    } else {
        std::cout << boolean << std::endl;
    }
}