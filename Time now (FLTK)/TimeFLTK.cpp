#include <ctime>
#include <FL/Fl.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>

void btn1_callback() {
    win->end();
    exit(0);
}

int main() {
    Fl_Window *win = new Fl_Window(640, 480, "Time now FLTK");

    time_t* now = time(nullptr);
    Fl_Output *txt = new Fl_Output(50, 50, 50, 50, ctime(&now));
    txt->show();


    Fl_Button *btn = new Fl_Button(60, 60, 60, 60, "Leave");
    btn->show();
    btn->callback(btn1_callback);

    win->show();
    return Fl::run();
}