#include "question_starting.h"
#include <iostream>
#include <string>
#include "main_ui/launcher.h"

void function_ui() {
    std::cout << "Start? (y / n ) :";
    std::string question_ui_launch;
    std::cin >> question_ui_launch;

    if (question_ui_launch == "y" && question_ui_launch == "Y") {
        std::cout << "Starting..." << std::endl;
        launch();
    } else {
        std::cout << "Bye !" << std::endl;
        exit(0);
    }
}