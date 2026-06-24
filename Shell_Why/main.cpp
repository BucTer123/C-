#include "mainwindow.h"
#include <QApplication>
#include <QTextEdit>
#include <QObject>
#include <QPushButton>
#include <QString>
#include "datetime.h"
#include "browser.h"

QTextEdit *line;
QPushButton *btn;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800, 600);
    w.setWindowTitle("Shell");
    w.setObjectName("window_style");
    w.setStyleSheet(
        "#window_style {"
        "background: black;"
        "color: green;"
        "font-family: sans-serif;"
        "font-size: medium;"
        "font-style: initial;"
        "font-weight: bolder;"
        "padding: 0;"
        "margin: 0;"
        "}"
    );

    line = new QTextEdit("> ");
    line->setParent(&w);
    line->move(750, 10);
    line->setObjectName("ln");
    line->setStyleSheet(
        "#ln {"
        "background: black;"
        "color: green;"
        "padding: 10px;"
        "margin: 5px;"
        "border: 1px solid gray;"
        "}"
        "#ln:focus {"
        "border: 1px solid blue;"
        "}"
    );

    btn = QPushButton("Go");
    btn->setParent(&w);
    btn->move(750, 25);
    btn->setObjectName("bt");
    btn->setStyleSheet(
        "#bt {"
        "background: black;"
        "color: whitesmoke;"
        "padding: 12px;"
        "margin: 6px;"
        "border: 1px solid gray;"
        "opacity: 1;"
        "}"
        "#bt:focus {"
        "background: whitesmoke;"
        "color: black;"
        "opacity: 0.7;"
        "border: 1px solid blue;"
        "}"
        "#bt:hover {"
        "opacity: 0.5;"
        "transform: translateY(4px);"
        "}"
        "#bt:active {"
        "opacity: 0.3;"
        "transform: translateX(5px);"
        "}"
    );
    QObject::connect(btn, &QPushButton::clicked,[&]() {
        QString cmd = line->text();

        if (cmd == "DateTime") {
            date();
        }
        if (cmd == "Leave") {
            exit(0);
        }
        if (cmd == "Browser") {
            browser();
        }
    });

    w.show();
    return a.exec();
}
