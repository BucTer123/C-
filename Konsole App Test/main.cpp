#include <iostream>
#include <string>
#include "Commands/help_cmd.h"
#include "Commands/math_cmd.h"
#include "Language/main_lang.h"
#include "Commands/mkdir_cmd.h"
#include "Commands/rmdir_cmd.h"
#include "Commands/mkfil_cmd.h"
#include "Commands/rmfl_cmd.h"
#include "Commands/note_cmd.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "\033[36m WELCOME! \033[0m" << endl;
    while (true) {
        cout << "> ";
        string cmd;
        cin >> cmd;

        if (cmd == "help") {
            list_of_commands();
        }
        if (cmd == "exit") {
            exit(0);
        }
        if (cmd == "math") {
            calculator();
        }
        if (cmd == "start_lang") {
            lng();
        }
        if (cmd == "mkdir") {
            cr();
        }
        if (cmd == "rmdir") {
            remove_dir();
        }
        if (cmd == "mkfl") {
            create_fil();
        }
        if (cmd == "rmfl") {
            remove_fil();
        }
        if (cmd == "note") {
            cpnt();
        }
        if (cmd == "web_pseudo") {
            system("cd Web_Wersion");
            system("xdg-open main.html");
        }
        if (cmd == "time_now") {
            time_t now = time(nullptr);
            cout << ctime(&now) << endl;
        }
    }
}