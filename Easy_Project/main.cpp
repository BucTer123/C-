#include "mainwindow.h"

#include <QApplication>
#include <QLabel>


QLabel *text1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(640, 400);
    w.setWindowTitle("App");

    text1 = new QLabel("Hi!");
    text1->setObjectName("txt");
    text1->setStyleSheet(
	"#txt {"
	"color: whitesmoke;"
	"background: blue;"
	"}"
    );
    text1->setParent(&w);
    text1->move(320, 10);

    w.show();
    return a.exec();
}
