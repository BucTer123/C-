#include <iostream>
#include <string>
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QObject>
#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include "UI.h"

using namespace std;

class UI {
    public:
        void create_mainwindow(int screen_width, int screen_height, string name_window, int argc, char **argv) {
            QApplication a(argc, argv);

            QMainWindow w;
            w.resize(screen_width, screen_height);
            w.setWindowTitle(name_window);

            w.show();
        }
        void create_button(int first_position_button, int second_position_button, string name, bool is_callback) {
            QPushButton *button = new QPushButton(name.c_str());
            button->move(first_position_button, second_position_button);
            button->show();

            if (is_callback) {
                QObject::connect(button, &QPushButton::clicked, [&] {
                    std::cout << "Button Clicked!";
                    exit(0);
                });
            }
        }
        void create_label(int first_position_label, int second_position_label, string name_label) {
            QLabel *text = new QLabel(name_label.c_str());
            text->move(first_position_label, second_position_label);
            text->show();
        }
        void create_window(int screen_width_window, int screen_height_window, string name_window) {
            QWidget w;
            w.resize(screen_width_window, screen_height_window);
            w.setWindowTitle(name_window);

            w.show();
        }
        void create_input(int first_position_input, int second_position_input, string name_input) {
            QLineEdit *input = new QLineEdit(name_input.c_str());
            input->move(first_position_input, second_position_input);
            input->show();
        }
        void create_custom_author_window(int screen_width_author_window, int screen_height_author_window, string name_author_window) {
            QWidget author_win;
            author_win.resize(screen_width_author_window, screen_height_author_window);
            author_win.setWindowTitle(name_author_window);

            QLabel *author_win_text = new QLabel("This is Test Window!", &author_win);
            author_win_text->move(screen_width_author_window / 2, screen_width_author_window / 10);
            author_win_text->show();

            author_win->show();
        }
};