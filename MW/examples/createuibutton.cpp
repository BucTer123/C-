#include "MW/MWApplication.h"
int main() { 
    MWApp app;
    app.ui_init(int argc, char**argv);
    app.ui_create_mainwindow(1920, 1080, "Mainwindow");
    app.ui_create_button(960, 10, "Press me");
    app.stop(0);
}
