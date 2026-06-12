#include <iostream>
#include <string>
#include <ctime>
#include "commands_console/list.h"
#include "commands_console/calc.h"
#include "commands_console/cls.h"
#include "net/req.h"
#include "filesystem/cd.h"
#include "filesystem/rd.h"
#include "filesystem/cf.h"
#include "filesystem/rf.h"
#include "commands_console/exit.h"
#include "application/question_starting.h"

int main() {
    time_t now;
    time(&now);
    std::cout << ctime(&now) << std::endl;

    while (true) {
        std::cout << "> ";
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "cmd -h") {
            function_list();
        }
        else if (cmd == "cmd -p") {
            function_requests();
        }
        else if (cmd == "cmd -c") {
            function_calc();
        }
        else if (cmd == "cmd -l") {
            function_clear();
        }
        else if (cmd == "fl -cd") {
            function_createdir();
        }
        else if (cmd == "fl -rd") {
            function_removedir();
        }
        else if (cmd == "fl -cf") {
            function_createfile();
        }
        else if (cmd == "fl -rf") {
            function_removefile();
        }
        else if (cmd == "cmd -e") {
            function_exit();
        }
        else if (cmd == "cmd -a") {
            function_ui();
        }
    }
}