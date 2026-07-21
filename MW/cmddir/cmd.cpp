#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <ncurses.h>

class CMD : public CMD {
    void get_time(auto w) {
        time_t time;
        time(&now);
        w = ctime(&now);
        std::cout << w << std::endl;
    }
    void get_color_text(std::string text, std::string color) {
        if (color == "red") {
            std::cout << "\033[31m " << text << "\033[0m" << std::endl;
        }
        else if (color == "green") {
            std::cout << "\033[32m " << text << "\033[0m" << std::endl;
        }
        else if (color == "yellow") {
            std::cout << "\033[33m " << text << "\033[0m" << std::endl;
        }
        else if (color == "blue") {
            std::cout << "\033[34m " << text << "\033[0m" << std::endl;
        }
        else if (color == "magenta") {
            std::cout << "\033[35m " << text << "\033[0m" << std::endl;
        }
        else if (color == "cyan") {
            std::cout << "\033[36m " << text << "\033[0m" << std::endl;
        }
        else if (color == "white") {
            std::cout << "\033[37m " << text << "\033[0m" << std::endl;
        }
    }
    void echoln(std::string text_echo) {
        std::cout << text_echo << std::endl;
    }
    void fst(bool third_boolean) {
        if (third_boolean) {
            system("fastfetch");
        }
    }
    void fig(std::string text_fig, bool fourth_boolean) {
        if (fourth_boolean) {
            std::string text_in_fig = "figlet " + text_fig;
            system(text_in_fig.c_str());
        }
    }
    void animation(std::string text_animation, bool fifth_boolean) {
        if (fifth_boolean) {
            initscr();
            echo();

            int MaxX, MaxY;
            for (int z = 0; z < MaxX; z++) {
                getmaxyx(MaxX, MaxY);
                mvprintw(MaxX / 2, MaxY % z, "%s", text_animation.c_str());
            }
        }
    }
    void main_text() {
        std::cout << "This is test ...";
    }
    void inputln(std::strring text_input) {
        std::cout << text_input << std::endl;
        std::string variable;
        std::cin >> variable;

        std::cout << variable << std::endl;
    }
};
