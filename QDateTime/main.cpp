#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QDateTime>
#include <QLabel>

QLabel *write;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDateTime now = QDateTime::currentDateTime();
    qDebug(now);
    write = new QLabel(now);

    w.show();
    return a.exec();
}
