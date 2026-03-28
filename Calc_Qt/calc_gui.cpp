#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QFloat16>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>

void btn_cl_callback() {
    qfloat16 a = input_first_number;
    qfloat16 b = input_second_number;
    QString c = input_third;

    if (c == "+") {
        qfloat16 plus = a + b;
        QDebug(plus);
    }
    if (c == "-") {
        qfloat16 minus = a - b;
        QDebug(minus);
    }
    if (c == "*") {
        qfloat16 multi = a * b;
        QDebug(multi);
    }
    if (c == "/") {
        if (b == 0) {
            QDebug("ERROR!: Divide by zero!");
        } else {
            qfloat16 divide = a / b;
            QDebug(divide);
        }
    }
}

void calc_ui(int argc, argv) {
    QApplication(argc, argv);

    QMainWindow w2;
    w2.resize(1920, 1080);
    w2.setTitle("CALC");

    w2->setObjectName("calc_win");
    w2->setStyleSheet(
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
    );

    QLineEdit *input_first_number = new QLineEdit("Write first number :");
    input_first_number->setObjectName("first_num");
    input_first_number->setStyleSheet(
        "#first_num {";
            "background: dimgray";
            "color: whitesmoke";
            "padding: 16px";
            "margin: 8px";
            "justify-content: center";
            "justify-items: center";
            "justify-self: center";
            "align-content: center";
            "align-items: center";
            "align-self: center";
        "}";
    );

    QLineEdit *input_second_number = new QLineEdit("Write second number :");
    input_second_number->setObjectName("second_num");
    input_second_number->setStyleSheet(
        "#second_num {";
            "background: dimgray";
            "color: whitesmoke";
            "padding: 16px";
            "margin: 8px";
            "justify-content: center";
            "justify-items: center";
            "justify-self: center";
            "align-content: center";
            "align-items: center";
            "align-self: center";
        "}";
    );

    QLineEdit *input_third = new QLineEdit("Write what to do in calc :");
    input_third->setObjectName("third_inp");
    input_third->setStyleSheet(
        "#third_inp {";
            "background: dimgray";
            "color: whitesmoke";
            "padding: 16px";
            "margin: 8px";
            "justify-content: center";
            "justify-items: center";
            "justify-self: center";
            "align-content: center";
            "align-items: center";
            "align-self: center";
        "}";
    );

    QPushButton *btn_cl = new QPushButton("GO!");
    btn_cl->setObjectName("go_bt");
    btn_cl->setStyleSheet(
        "#first_num {";
            "background: dimgray";
            "color: whitesmoke";
            "padding: 16px";
            "margin: 8px";
            "justify-content: center";
            "justify-items: center";
            "justify-self: center";
            "align-content: center";
            "align-items: center";
            "align-self: center";
        "}";
    );
    QObject::connect(btn_cl, &QPushButton::clicked, btn_cl_callback);
}
