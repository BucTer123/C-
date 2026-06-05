#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

void function_callback_button(Fl_Widget* w) {
    w->show();
    w->hide();
    exit(0);
}

void ui_start() {
    Fl_Window *win = new Fl_Window(800, 600, "Window");
    win->show();

    Fl_Box *box = new Fl_Box(10, 20, 30, 40, "Welcome!");
    box->show();

    Fl_Button *button = new Fl_Button(50, 60, 70, 80, "Button");
    button->show();
    button->callback(function_callback_button);

    win->end();
    exit(0);
}