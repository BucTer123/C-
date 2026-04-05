#include <QWidget>
#include <QDateTime>
#include <QLabel>

QLabel *write_datetime;

void date() {
    QWidget w2;

    w2.resize(400, 300);
    w2.setWindowTitle("DateTime");
    w2.setObjectName("second_window");
    w2.setStyleSheet(
        "#second_window {"
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

    QDateTime now =QDateTime::currentDateTime();
    write = new QLabel(now, &w2);
    write->setObjectName("datetime_label");
    write->setStyleSheet(
        "#datetime_label {"
        "padding: 40px;"
        "margin: 20px;"
        "}"
    );
}
