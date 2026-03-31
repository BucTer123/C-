//Modules
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QVector>
#include <QList>
#include <QVBoxLayout>
#include "chat_create.h"

//Global Label QPushButton and QLineEdits
QLabel *text1;
QLabel *text2;
QPushButton *btn_log;
QPushButton *chat1;
QPushButton *btn_chat1;
QLineEdit *input_chat_one;
QPushButton *btn_create_chat;
QLineEdit *input_username;
QLineEdit *input_password;


//Messenger main window
void messenger_main() {
    //QMainWindow = Main Window
    QMainWindow *w2;

    //size and title for main window
    w2->resize(640, 400);
    w2->setWindowTitle("Main Messenger");

    //style for main window
    w2->setObjectName("window_main");
    w2->setStyleSheet(
        "#window_main {"
        "background: whitesmoke;"
        "color: black;"
        "padding: 0;"
        "margin: 0;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-weight: bolder;"
        "font-style: initial;"
        "display: flex;"
        "}"
    );

    //button for first chat
    btn_chat1 = new QPushButton("First chat");

    //Position and show first button chat
    btn_chat1->setParent(w2);
    btn_chat1->move(0, 50);
    btn_chat1->show();

    //StyleSheet for first chat button
    btn_chat1->setObjectName("buttchat1");
    btn_chat1->setStyleSheet(
        "#buttchat1 {"
        "background: blue;"
        "color: whitesmoke;"
        "padding: 14px;"
        "margin: 7px;"
        "}"
        "#buttchat1:focus {"
        "background: whitesmoke;"
        "color: blue;"
        "opacity: 0.7;"
        "}"
        "#buttchat1:hover {"
        "transform: translateY(10px);"
        "opacity: 0.4;"
        "}"
        "#buttchat1:active {"
        "transform: scale(1.1);"
        "opacity: 0.1;"
        "}"
    );

    //Clicked
    QObject::connect(btn_chat1, &QPushButton::clicked, [w2]() {
        w2->hide();

        //Third Window = Window first chat
        QWidget* w3 = new QWidget();

        //size and Style window

        w3->resize(640, 400);
        w3->setWindowTitle("Notates");

        w3->setObjectName("window_chat1");
        w3->setStyleSheet(
            "#window_chat1 {"
            "background: whitesmoke;"
            "color: black;"
            "padding: 0;"
            "margin: 0;"
            "font-family: sans-serif;"
            "font-size: medium;"
            "font-weight: bolder;"
            "font-style: initial;"
            "display: flex;"
            "}"
        );

        //Hidden text
        QLabel *hidden_text = new QLabel();

        //Position and size for Hidden text
        hidden_text->setParent(w3);
        hidden_text->move(10, 20);
        hidden_text->show();

        //style for text
        hidden_text->setObjectName("txt_hidd");
        hidden_text->setStyleSheet(
            "#txt_hidd {"
            "color: whitesmoke;"
            "padding: 10px;"
            "margin: 5px;"
            "}"
        );

        //Input to write
        input_chat_one = new QLineEdit("Write :");

        //Position and show input to write
        input_chat_one->setParent(w3);
        input_chat_one->move(50, 0);
        input_chat_one->show();

        //Stylesheet for input to write
        input_chat_one->setObjectName("inputchat");
        input_chat_one->setStyleSheet(
            "#inputchat {"
            "background: black;"
            "color: whitesmoke;"
            "padding: 18px;"
            "margin: 9px"
            "}"
            "inputchat:focus {"
            "background: whitesmoke;"
            "color: black;"
            "opacity: 0.7;"
            "}"
        );

        //Button send
        chat1 = new QPushButton("Send");

        //Position and show Button send
        chat1->setParent(w3);

        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chat1);
        layout->addStretch();

        w3->setLayout(layout);

        chat1->show();

        //style for Button send
        chat1->setObjectName("snd_btn");
        chat1->setStyleSheet(
            "#snd_btn {"
            "background: blue;"
            "color: whitesmoke;"
            "padding: 14px;"
            "margin: 7px;"
            "}"
            "#snd_btn:focus {"
            "background: whitesmoke;"
            "color: blue;"
            "opacity: 0.7;"
            "}"
            "#snd_btn:hover {"
            "transform: translateY(10px);"
            "opacity: 0.4;"
            "}"
            "#snd_btn:active {"
            "transform: scale(1.1);"
            "opacity: 0.1;"
            "}"
        );

        //Button Create Chat
        btn_create_chat = new QPushButton("Create Chat");

        //Position and show Button send
        btn_create_chat->setParent(w3);

        QHBoxLayout *layout2 = new QHBoxLayout();
        layout2->addWidget(btn_create_chat);
        layout2->addStretch();

        w3->setLayout(layout2);

        btn_create_chat->show();

        //Stylesheet show Button send
        btn_create_chat->setObjectName("butt_create");
        btn_create_chat->setStyleSheet(
            "#butt_create {"
            "background: blue;"
            "color: whitesmoke;"
            "padding: 14px;"
            "margin: 7px;"
            "}"
            "#butt_create:focus {"
            "background: whitesmoke;"
            "color: blue;"
            "opacity: 0.7;"
            "}"
            "#butt_create:hover {"
            "transform: translateY(10px);"
            "opacity: 0.4;"
            "}"
            "#butt_create:active {"
            "transform: scale(1.1);"
            "opacity: 0.1;"
            "}"
        );

        QObject::connect(btn_create_chat, &QPushButton::clicked, [&]() {
            chat_create_callback();
        });

        //clicked
        QObject::connect(chat1, &QPushButton::clicked, [=]() {
            QString ln = input_chat_one->text();

            hidden_text->setText(ln);
        });
        w3->show();
    });
    w2->show();
}

//main
int main(int argc, char *argv[])
{
    //Widget = First Window in App
    QApplication a(argc, argv);
    QWidget w;

    //size and title for Window
    w.resize(800, 600);
    w.setWindowTitle("Login");

    //style for window
    w.setObjectName("window_log");
    w.setStyleSheet(
        "#window_log {"
        "background: whitesmoke;"
        "color: black;"
        "padding: 0;"
        "margin: 0;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-weight: bolder;"
        "font-style: initial;"
        "display: flex;"
        "}"
    );

    //First text
    text1 = new QLabel("Welcome!");

    //Position and show text1 in the window
    text1->setParent(&w);
    text1->move(50, 60);
    text1->show();

    //Stylesheet for text1
    text1->setObjectName("txt1");
    text1->setStyleSheet(
        "#txt1 {"
        "color: black;"
        "padding: 20px;"
        "margin: 10px;"
        "}"
    );

    //Second text
    text2 = new QLabel("Write username password and press 'login' :");


    //Position and show text2 in the window
    text2->setParent(&w);
    text2->move(70, 80);
    text2->show();

    //Stylesheet for text2
    text2->setObjectName("txt2");
    text2->setStyleSheet(
        "#txt2 {"
        "color: black;"
        "padding: 20px;"
        "margin: 10px;"
        "}"
    );

    //First input = Input username
    input_username = new QLineEdit("Write username :");

    //Position and show
    input_username->setParent(&w);
    input_username->move(100, 110);
    input_username->show();

    //Stylesheet for input_username
    input_username->setObjectName("input1");
    input_username->setStyleSheet(
        "#input1 {"
        "background: black;"
        "color: whitesmoke;"
        "padding: 18px;"
        "margin: 9px"
        "}"
        "input1:focus {"
        "background: whitesmoke;"
        "color: black;"
        "opacity: 0.7;"
        "}"
    );

    //Second input = Input password
    input_password = new QLineEdit("Write username :");

    //Position and show
    input_password->setParent(&w);
    input_password->move(120, 130);
    input_password->show();

    //Stylesheet for input_password
    input_password->setObjectName("input2");
    input_password->setStyleSheet(
        "#input2 {"
        "background: black;"
        "color: whitesmoke;"
        "padding: 18px;"
        "margin: 9px"
        "}"
        "#input2:focus {"
        "background: whitesmoke;"
        "color: black;"
        "opacity: 0.7;"
        "}"
    );

    //First Button = Login button to continue
    btn_log = new QPushButton("Login");

    //Position and show
    btn_log->setParent(&w);
    btn_log->move(140, 150);
    btn_log->show();

    //Stylesheet for First Button
    btn_log->setObjectName("butt1");
    btn_log->setStyleSheet(
        "#btn_log {"
        "background: blue;"
        "color: whitesmoke;"
        "padding: 14px;"
        "margin: 7px;"
        "}"
        "#btn_log:focus {"
        "background: whitesmoke;"
        "color: blue;"
        "opacity: 0.7;"
        "}"
        "#btn_log:hover {"
        "transform: translateY(10px);"
        "opacity: 0.4;"
        "}"
        "#btn_log:active {"
        "transform: scale(1.1);"
        "opacity: 0.1;"
        "}"
    );

    //Clicked button
    QObject::connect(btn_log, &QPushButton::clicked, []() {
        QString a = input_username->text();
        QString b = input_password->text();

        if (a == "" || b == "") {
            //Error with username and password
            qDebug("ERROR!: Write username and password!");
        } else {
            //create list usernames and passwords

            //list usernames
            QList<QString> usernames = {};
            usernames = {a};

            //list passwords
            QList<QString> passwords = {};
            passwords = {b};


            //goto messenger main window
            messenger_main();
        }
    });

    w.show();
    return a.exec();
}
