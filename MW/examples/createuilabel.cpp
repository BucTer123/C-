#include "MW/MWApplication.h"
int main() {
  MWApp app;
  app.ui_create_mainwindow(1920, 1080, "Mainwindow");
  app.ui_create_label(960, 10, "Welcome!");
  app.stop(0);
}
