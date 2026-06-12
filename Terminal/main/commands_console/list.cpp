#include <iostream>
#include "list.h"

void function_list() {
    std::cout << "List of commands :" << std::endl;
    std::cout << "1 => cmd -h (list of commands)" << std::endl;
    std::cout << "2 => cmd -p (ping)" << std::endl;
    std::cout << "3 => cmd -c (calculator )" << std::endl;
    std::cout << "4 => cmd -l (clear)" << std::endl;
    std::cout << "5 => fl -cd (create dir) " << std::endl;
    std::cout << "6 => fl -rd (remove dir) " << std::endl;
    std::cout << "7 => fl -cf (create file) " << std::endl;
    std::cout << "8 => fl -rf (remove file) " << std::endl;
    std::cout << "9 => cmd -e (exit)" << std::endl;
    std::cout << "10 => cmd -a (open app)" << std::endl;
}