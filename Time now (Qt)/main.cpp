#include <iostream>
#include <string>
#include "main_timenow_gui.h"

int main() {
    std::cout << "\033[36m WELCOME! \033[0m" << std::endl;

    std::cout << "> ";
    std::string c;

    if (c == "timenow") {
        timenow();
    } else {
        std::cout << "\033[31m ERROR! \033[0m" << std::endl;
    }
}