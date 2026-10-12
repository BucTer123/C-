#include "MW/MWApplication"
int main() {
  MWApp app;
  app.ui_init(int argc, char** argv);
  app.ui_create_mainwindow(1920, 1080, "Mainwindow");
  app.ui_create_label(960, 10, "Welcome!");
  app.ui_create_button(960, 20, "Press");
  app.ui_create_input(960, 30, "Input:");
  app.stop(0);
}
