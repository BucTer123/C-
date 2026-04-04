#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QTimer>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QLabel label("0");
    label->setParent(&w);

    int counter = 0;

    QTimer *timer = new QTimer();
    timer->setParent(&w);

    QObject::connect(timer, &QTimer::timeout, [&]() {
        counter++;
        label.setText(QString::number(counter));
    });

    timer->start(1000);

    w.show();
    return a.exec();
}
