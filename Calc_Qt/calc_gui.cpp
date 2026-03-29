#include "mainwindow.h"

#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QDebug>
#include <QWidget>
#include <QLabel>
#include <QMessageBox>

QLineEdit *input_first_number;
QLineEdit *input_second_number;
QLineEdit *input_third;
QPushButton *btn_cl;
QLabel *result;

void calc_gui() {
    QWidget *w2 = new QWidget();

    w2->resize(800, 600);
    w2->setWindowTitle("CALC");

    w2->setObjectName("calc_win");
    w2->setStyleSheet(
        "#calc_win {"
        "background: whitesmoke;"
        "color: dimgray;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-weight: bolder;"
        "font-style: initial;"
        "padding: 0;"
        "margin: 0;"
        "}"
    );

    input_first_number = new QLineEdit("> ", w2);
    input_first_number->setObjectName("first_num");
    input_first_number->setStyleSheet(
        "#first_num {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
	"}"
    );

    input_second_number = new QLineEdit("> ", w2);
    input_second_number->setObjectName("second_num");
    input_second_number->setStyleSheet(
        "#second_num {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;" 
        "}"
    );

    input_third = new QLineEdit("> ", w2);
    input_third->setObjectName("third_inp");
    input_third->setStyleSheet(
        "#third_inp {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;" 
        "}"
    );

    btn_cl = new QPushButton("GO!", w2);
    btn_cl->setObjectName("go_bt");
    btn_cl->setStyleSheet(
        "#go_bt {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "}"
    );

    result = new QLabel("Result will appear here", w2);
    result->move(110, 330);
    result->resize(200, 40);
    result->setStyleSheet("color: black;");

    input_first_number->move(100, 50);
    input_second_number->move(100, 120);
    input_third->move(100, 190);
    btn_cl->move(100, 260);

    QObject::connect(btn_cl, &QPushButton::clicked, []() {
        float a = input_first_number->text().toFloat();
        float b = input_second_number->text().toFloat();
        QString op = input_third->text();
        QString res;

        if (op == "+") res = QString::number(a + b);
        else if (op == "-") res = QString::number(a - b);
        else if (op == "*") res = QString::number(a * b);
        else if (op == "/") {
            if (b == 0) res = "ERROR: Divide by zero!";
            else res = QString::number(a / b);
        } else res = "Unknown operator";

        QMessageBox::information(nullptr, "Result", res);
    });

    w2->show();
}
