#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>


void launcher() {
    Fl_Window *window = new Fl_Window(640, 480);
    window->show();

    Fl_Box *box = new Fl_Box(10, 20, 30, 40);
    box->show();
    Fl_Button *button = new Fl_Button(50, 60, 70, 80);
    button->show();

    Fl_Button *button2 = new Fl_Button(90, 100, 110, 120);
    button2->show();

    exit(0);
}