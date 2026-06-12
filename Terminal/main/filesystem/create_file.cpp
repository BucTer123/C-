#include "cf.h"
#include <iostream>
#include <string>
#include <fstream>

void function_createfile() {
    std::cout << "> ";
    std::string question_createfile;
    std::cin >> question_createfile;

    std::ofstream file(question_createfile);
    std::cout << "Created : " << question_createfile << std::endl;

}