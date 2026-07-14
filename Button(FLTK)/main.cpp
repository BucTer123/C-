#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void btn_callback() {
    exit(0);
}

int main() {
    Fl_Window *win = new Fl_Window(800, 600, "Window!");

    Fl_Button *btn = new Fl_Button(400,10,20,10, "Click");
    btn->show();
    btn->callback(btn_callback);
    
    win->show();
    return 0;
}
