#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include "commands/requestsz.h"
#include "commands/cmd/terminalz.h"

void btn1_callback(Fl_Widget* data) {
    gui_dd();
    exit(0);
}

void btn2_callback(Fl_Widget*) {
    gui_rr();
    exit(0);
}

int main() {
    Fl_Window *win = new Fl_Window(640, 400, "App");

    Fl_Output *text1 = new Fl_Output(320, 10, 10, 15, "Welcome!");
    text1->show();

    Fl_Output *text2 = new Fl_Output(320, 20, 10, 15, "Choice button :");
    text2->show();

    Fl_Button *btn1 = new Fl_Button(320, 30, 10, 15, "CURL_REQ");
    btn1->show();
    btn1->callback(btn1_callback);

    Fl_Button *btn2 = new Fl_Button(320, 40, 10, 15, "CMD");
    btn2->show();
    btn2->callback(btn2_callback);

    win->show();
    win->end();
    return Fl::run();
}
