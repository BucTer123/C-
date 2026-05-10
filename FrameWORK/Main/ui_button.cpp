#include <iostream>
#include <string>
#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QObject>
#include "ui_button.h"

void btn_new_ui(int argc char** argv) {
	QApplication a(argc, argv);
	QMainWindow *win = new QMainWindow();
	
	win->resize(800, 600);
	win->setWindowTitle("GUI");
	
	QPushButton *btn = new QPushButton("click", win);
	QObject::connect(btn, &QPushButton::clicked, [] {
		QWidget *win2 = new QWidget();
		win2->resize(300, 200);
		win2->setWindowTitle("New Window");
		win2->show();
	});
	
	a.exec();
	win->show();
	return 0;
}