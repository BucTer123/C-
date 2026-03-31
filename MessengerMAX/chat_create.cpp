//Modules
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QObject>
#include "chat_create.h"

//Global Label's QLineEdit's and QPushButton's
QLineEdit *input_to_cr;
QPushButton *btn10;


//void to create chat
void chat_create_callback() {
    //Create window to create chat

    QWidget win_create;

    //size and title
    win_create.resize(640, 480);
    win_create.setWindowTitle("Create");

    //style
    win_create->setObjectName("win_cr");
    win_create->setStyleSheet(
        "#win_cr {"
        "background: white;"
        "color: black;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-weight: bolder;"
        "font-style: initial;"
        "padding: 0;"
        "margin: 0;"
        "}"
    );
    
    //Create input
    input_to_cr = new QLineEdit("Write name for chat :");
    
    //Position and size
    input_to_cr->setParent(win_create);
    input_to_cr->move(50, 50);
    input_to_cr->show();

    //Stylesheet
    input_to_cr->setObjectName("input34");
    input_to_cr->setStyleSheet(
        "#input34 {"
        "background: dimgray;"
        "color: whitesmoke;"
        "padding: 16px;"
        "margin: 8px;"
        "opacity: 1;"
        "}"
        "input34:focus {"
        "background: whitesmoke;"
        "color: dimgray;"
        "opacity: 0.5;"
    );

    //Create button
    btn10 = new QPushButton("Create");

    //Position and size
    btn10->setParent(win_create);
    btn10->move(52, 50);
    btn10->show();

    //Stylesheet
    btn10->setObjectName("btn100");
    btn10->setStyleSheet(
        "#btn100 {"
        "background: black;"
        "color: whitesmoke;"
        "padding: 20px;"
        "margin: 10px;"
        "opacity: 1;"
        "}"
        "#btn100:focus {"
        "background: whitesmoke;"
        "color: black;"
        "opacity: 0.7;"
        "}"
        "#btn100:hover {"
        "opacity: 0.5;"
        "transform: translateY(10px);"
        "}"
        "#btn100:active {"
        "opacity: 0.3;"
        "transform: scale(3.3);"
        "}"
    );

    //click
    QObject::connect(btn10, &QPushButton::clicked, []() {
        QString cmd = input_to_cr->text();

        if (cmd == "") {
            qDebug("ERROR!");
        } else {
            QList<QString> chats = {"chatt1", cmd};
        }
    });
}
