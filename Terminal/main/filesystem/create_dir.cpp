#include "cd.h"
#include <iostream>
#include <string>
#include <filesystem>

void function_createdir() {
    std::cout << "> ";
    std::string question_createdir;
    std::cin >> question_createdir;

    std::filesystem::create_directory(question_createdir);
    std::cout << "Created : " << question_createdir << std::endl;

}