#include <iostream>
#include <string>
#include "ui.h"

int main() {
	std::cout << "\033[36m WELCOME! \033[0m" << std::endl;
	std::cout << "Do you want to start? (y/n) :";
	std::string question;
	std::cin >> question;
	
	if ( question == "Y" || question == "y") {
		std::cout << "Starting....." << std::endl;
		starting_ui();
	} else {
		std::cout << "\033[31m BYE! \033[0m" << std::endl;
		return 0;
	}
}