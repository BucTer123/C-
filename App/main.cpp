#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <iostream>
#include <QPushButton>
#include <QObject>
#include "launch.h"
#include "sett.h"

void btn1_callback() {
    start_function();
}

void btn2_callback() {
    settings_function();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800, 600);
    w.setWindowTitle("Menu");
    w.setObjectName("w1");
    w.setStyleSheet(
    "w1 {"
    "   background: whitesmoke"
    "   color: black"
    "}"
    );

    QLabel *main_text = new QLabel("Welcome!", &w);
    main_text->move(400, 10);
    main_text->setObjectName("mt");
    main_text->setStyleSheet(
    "#mt {"
    "   font-family: sans-serif"
    "   font-size: medium"
    "}"
    );

    QPushButton *btn1 = new QPushButton("Start", &w);
    btn1->move(400, 30);
    btn1->setObjectName("b1");
    btn1->setStyleSheet(
    "#b1 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn1, &QPushButton::clicked, btn1_callback);

    QPushButton *btn2 = new QPushButton("Settings", &w);
    btn2->move(400, 40);
    btn2->setObjectName("b2");
    btn2->setStyleSheet(
    "#b2 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn2, &QPushButton::clicked, btn2_callback);

    QPushButton *btn3 = new QPushButton("Exit", &w);
    btn2->move(400, 50);
    btn2->setObjectName("b3");
    btn2->setStyleSheet(
    "#b3 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn3, &QPushButton::clicked, [] () {
        std::cout << "Bye!";
        exit(0);
    });

    w.show();
    return a.exec();
}
