#include <QWidget>
#include <QObject>
#include <QPushButton>
#include <QLabel>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstdlib>
#include <QLineEdit>
#include <QString>
#include "launch.h"

using namespace std::filesystem;
using namespace std;

void start_function() {
    QWidget w2;
    w2.resize(800, 600);
    w2.setWindowTitle("MainWindow");
    w2.setObjectName("w2");
    w2.setStyleSheet(
    "#w2 {"
    "   background: blue"
    "   color: black"
    "}"
    );

    QLabel *text2 = new QLabel("Choice button :", &w2);
    text2->move(300, 10);
    text2->setObjectName("t2");
    text2->setStyleSheet(
    "#t2 {"
    "   font-family: sans-serif"
    "   font-size: medium"
    "}"
    );

    QPushButton *btn1 = new QPushButton("Create Dir", &w2);
    btn1->move(300, 20);
    btn1->setObjectName("bt1");
    btn1->setStyleSheet(
    "#bt1 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn1, &QPushButton::clicked, [] () {
        QWidget w3;
        w3.resize(800, 600);
        w3.setWindowTitle("MainWindow");
        w3.setObjectName("w2");
        w3.setStyleSheet(
            "#w2 {"
            "   background: blue"
            "   color: black"
            "}"
        );

        QLineEdit *name_dir_create = new QLineEdit("Write name to create Dir: ", &w3);

        QPushButton *btn_name_dir_create = new QPushButton("Submit", &w3);

        QObject::connect(btn_name_dir_create, &QPushButton::clicked, [&] () {
            QString name_create = name_dir_create->text();

            if (name_create == "") {
                exit(0);
            } else {
                create_directory(name_create);
            }
        });

        w3.show();
    });

    QPushButton *btn2 = new QPushButton("Remove Dir", &w2);
    btn2->move(300, 30);
    btn2->setObjectName("bt2");
    btn2->setStyleSheet(
    "#bt2 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn2, &QPushButton::clicked, [] () {
        QWidget w4;
        w4.resize(800, 600);
        w4.setWindowTitle("MainWindow");
        w4.setObjectName("w3");
        w4.setStyleSheet(
        "#w3 {"
        "   background: whitesmoke"
        "   color: black"
        "}"
        );

        QLineEdit *name_dir_remove = new QLineEdit("Write name to remove dir ", &w4);

        QPushButton *btn_name_dir_remove = new QPushButton("Submit", &w4);

        QObject::connect(btn_name_dir_remove, &QPushButton::clicked, [&] () {
            QString name_remove = name_dir_remove->text();

            if (name_remove == "") {
                std::cout << "Bye!";
                exit(0);
            } else {
                remove_all(name_remove);
            }
        });

        w4.show();
    });

    QPushButton *btn3 = new QPushButton("Start WebServer", &w2);
    btn3->move(300, 40);
    btn3->setObjectName("bt3");
    btn3->setStyleSheet(
    "#bt3 {"
    "   background: blue"
    "   color: black"
    "}"
    );
    QObject::connect(btn3, &QPushButton::clicked, [] () {
        QWidget w5;
        w5.resize(800, 600);
        w5.setObjectName("w4");
        w5.setStyleSheet(
        "#w4 {"
        "   background: whitesmoke"
        "   color: black"
        "}"
        );

        QLineEdit *question = new QLineEdit("Do you want to start? (y/n) :", &w5);

        QPushButton *btnq = new QPushButton("Submit", &w5);

        QObject::connect(btnq, &QPushButton::clicked, [&] () {
            qDebug("Starting....");
            system("python webserver.py");
        });

        w5.show();
    });

    w2.show();
}
