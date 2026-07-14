#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QObject>

void timenow(int argc, char* argv[]) {
    QApplication a(argc, argv);

    QMainWindow w1;

    w1.resize(300, 200);

    w1.setWindowTitle("Time now!");

    time_t now;
    time(&now);

    QLabel *text1 = new QLabel(ctime(&now), &w1);
    text1->move(150, 10);
    
    QPushButton *btn1 = new QPushButton("Leave", &w1);
    btn->move(150, 20);
    
    QObject::connect(btn1, &QPushButton::clicked, [] () {
        w1.end();
        exit(0);
    });

    w1->show();
    return a.exec();
    return 0;
}
