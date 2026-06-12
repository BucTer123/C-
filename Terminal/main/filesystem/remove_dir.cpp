#include "rd.h"
#include <iostream>
#include <string>
#include <filesystem>

void function_removedir() {
    std::cout << "> ";
    std::string question_removedir;
    std::cin >> question_removedir;

    std::filesystem::remove_all(question_removedir);
    std::cout << "Removed : " << question_removedir << std::endl;

}