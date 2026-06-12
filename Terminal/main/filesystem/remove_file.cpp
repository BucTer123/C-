#include "rf.h"
#include <iostream>
#include <string>
#include <filesystem>

void function_removefile() {
    std::cout << "> ";
    std::string question_removefile;
    std::cin >> question_removefile;

    std::ifstream remove_file(question_removefile);
    std::cout << "Removed : " << question_removefile << std::endl;

}