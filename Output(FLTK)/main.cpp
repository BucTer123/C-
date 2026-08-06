#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Output.H>

int main() {
    Fl_Window *win = new Fl_Window(640, 480, "Window!");
    win->show();

    Fl_Output *txt = new Fl_Output(320, 10, 20, 10, "Welcome!");
    txt->show();

    Fl::run();
    exit(0);
}
