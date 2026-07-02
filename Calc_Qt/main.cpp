#include "mainwindow.h"

#include <QApplication>
#include <QLineEdit>
#include <QLabel>
#include <QObject>
#include <QPushButton>
#include <QMainWindow>
#include "calc_gui.h"

void btn1_callback() {
    calc_ui();
}

int main(int argc, char* argv) {
    QApplication main_app(argc, argv);

    QMainWindow w1;
    w1.resize(1920, 1080);
    w1.setTitle("App");

    w1.setObjectName("main_win");
    w1.setStyleSheet(
        "#main_win {";
            "background: whitesmoke";
            "color: dimgray";
            "font-family: sans-serif";
            "font-size: medium";
            "font-weight: bolder";
            "font-style: initial";
            "padding: 0";
            "margin: 0";
            "max-width: 1080px";
            "width: 100%";
            "max-height: 1920px";
            "height: 100%";
            "display: flex";
        "}";
    )

    QLabel *text1 = new QLabel("Welcome!");
    text1->setObjectName("txt1");
    text1->setStyleSheet(
        "#txt1 {"
            "color: lightcoral";
            "padding: 10px";
            "margin: 5px";
            "text-align: center";
        "}";
    );
    text1->setParent(&w1);
    text1->move(10, 20);

    QPushButton *btn1 = new QPushButton("Calculator");
    btn1->setObjectName("but");
    btn1->setStyleSheet(
        "#but {";
            "background: blue";
            "color: white";
            "padding: 12px";
            "margin: 6px";
        "}";
    );
    btn1->setParent(&w1);
    btn1->move(30, 40);
    QObject::connect(btn1, &QPushButton::clicked, btn1_callback);

    w1.show();
    main_app.exec();
}
