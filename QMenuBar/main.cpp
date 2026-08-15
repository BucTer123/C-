#include "mainwindow.h"

#include <QApplication>
#include <QMenuBar>
#include <QWidget>
#include <QStatusBar>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("MENU");
    w.resize(800, 600);

    QLabel *text = new QLabel("YA PIDORAZ!", &w);
    text->move(400, 10);


    QMenuBar *men = new QMenuBar(&w);
    QMenu *file = new QMenu(&w);
    file->addMenu("&File");
    file->addMenu("Info");
    men->addMenu(file);
    men->addMenu(file);

    QSlider *s1 = new QSlider(Qt::Horizontal, &w);
    QSlider *s2 = new QSlider(Qt::Vertical, &w);
    QSpinBox *sb = new QSpinBox;
    sb->setParent(&w);

    w.show();
    return a.exec();
    exit(0);
}
