#include "MW/MWApplication.h"
int main() {
  NWApp a;
  a.ui_init(int argc, char** argv);
  a.ui_create_mainwindow(1920, 1080, "Mainwindow");
  a.stop(0);
}
