#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QDebug>

QLineEdit *input_first_number;
QLineEdit *input_second_number;
QLineEdit *input_third;
QPushButton *btn_cl;

void btn_cl_callback() {
    float a = input_first_number;
    float b = input_second_number;
    QString c = input_third;

    if (c == "+") {
        float plus = a + b;
        qDebug() << plus;
    }
    if (c == "-") {
        float minus = a - b;
        qDebug() << minus;
    }
    if (c == "*") {
        float multi = a * b;
        qDebug() << multi;
    }
    if (c == "/") {
        if (b == 0) {
            qDebug() << "ERROR!: Divide by zero: ";
        } else {
            float divide = a / b;
            qDebug() << divide;
        }
    }
}

void calc_ui(int argc, argv) {
    QApplication C(argc, argv);

    QMainWindow w2;
    w2.resize(1920, 1080);
    w2.setWindowTitle("CALC");

    w2.setObjectName("calc_win");
    w2.setStyleSheet(
        "#main_win {"
        "background: whitesmoke;"
        "color: dimgray;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-weight: bolder;"
        "font-style: initial;"
        "padding: 0;"
        "margin: 0;"
        "max-width: 1080px;"
        "width: 100%;"
        "max-height: 1920px;"
        "height: 100%;"
        "display: flex;"
        "}"
    );

    input_first_number = new QLineEdit("Write first number :");
    input_first_number->setObjectName("first_num");
    input_first_number->setStyleSheet(
        "#first_num {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "justify-content: center;"
        "justify-items: center;"
        "justify-self: center;"
        "align-content: center;"
        "align-items: center;"
        "align-self: center;"
        "}"
    );

    input_second_number = new QLineEdit("Write second number :");
    input_second_number->setObjectName("second_num");
    input_second_number->setStyleSheet(
        "#second_num {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "justify-content: center;"
        "justify-items: center;"
        "justify-self: center;"
        "align-content: center;"
        "align-items: center;"
        "align-self: center;"
        "}"
    );

    input_third = new QLineEdit("Write what to do in calc :");
    input_third->setObjectName("third_inp");
    input_third->setStyleSheet(
        "#third_inp {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "justify-content: center;"
        "justify-items: center;"
        "justify-self: center;"
        "align-content: center;"
        "align-items: center;"
        "align-self: center;"
        "}"
    );

    btn_cl = new QPushButton("GO!");
    btn_cl->setObjectName("go_bt");
    btn_cl->setStyleSheet(
        "#first_num {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "justify-content: center;"
        "justify-items: center;"
        "justify-self: center;"
        "align-content: center;"
        "align-items: center;"
        "align-self: center;"
        "}"
    );
    QObject::connect(btn_cl, &QPushButton::clicked, btn_cl_callback);

    input_first_number->setParent(&w2);
    input_second_number->setParent(&w2);
    input_third->setParent(&w2);
    btn_cl->setParent(&w2);

    input_first_number->move(100, 50);
    input_second_number->move(100, 120);
    input_third->move(100, 190);
    btn_cl->move(100, 260);

    w2.show();
    return C.exec();
}
