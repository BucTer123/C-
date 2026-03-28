#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QObject>
#include <QPushButton>

void btn1_callback(int argc, char *argv[])
{
    QApplication b(argc, argv);
    QMainWindow w2;
    w2.resize(640, 480);
    w2.setWindowTitle("App");
    
    w2.setObjectName("second_win");
    w2.setStyleSheet(
        "#main_win {"
        "   background: white;"
        "   color: black;"
        "   padding: 0;"
        "   margin: 0;"
        "   max-width: 1080px;"
        "   max-height: 1920px;"
        "   width: 100%;"
        "   height: 100%;"
        "}"
    )

    QLabel *text2 = new QLabel("You create new Window!");
    text2->setObjectName("second_text");
    text2->setStyleSheet(
        "#second_text {"
        " background: white;"
        " color: black;"
        " font-family: sans-serif;"
        " font-size: medium;"
        " font-style: initial;"
        " font-weight: bold;"
        "}"
    );

    QPushButton *btn2 = new QPushButton("Leave");
    btn2->setObjectName("second_butt");
    btn2->setStyleSheet(
        "#second_butt {"
        "   background: whitesmoke;"
        "   padding: 10px;"
        "}"
    );
    QObject::connect(btn2, &QPushButton::clicked, btn2_callback);

    w2.show();
    return b.exec();
}

void btn2_callback() {
    qDebug() << "Shutdown";
    exit(0);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(1920, 1080);
    w.setWindowTitle("APP");
    w->setObjectName("main_win");
    w->setStyleSheet(
        "#main_win {"
        "   background: white;"
        "   color: black;"
        "   padding: 0;"
        "   margin: 0;"
        "   max-width: 1080px;"
        "   max-height: 1920px;"
        "   width: 100%;"
        "   height: 100%;"
        "}"
    );

    QLabel *text1 = new QLabel("Welcome!");
    text1->setObjectName("main_text");
    text1->setStyleSheet(
        "#main_text {"
        " background: white;"
        " color: black;"
        " font-family: sans-serif;"
        " font-size: medium;"
        " font-style: initial;"
        " font-weight: bold;"
        "}"
    );

    QPushButton *btn1 = new QPushButton("New Window");
    btn1->setObjectName("main_btn");
    btn1->setStyleSheet(
        "#main_btn {"
        "   background: whitesmoke;"
        "   padding: 10px;"
        "}"
    );
    QObject::connect(btn1, &QPushButton::clicked, btn1_callback);

    w.show();
    return a.exec();
}
