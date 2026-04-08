#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QObject>

void btn1_callback() {
    w1->end();
    exit(0);
}

void timenow(int argc, char* argv[]) {
    QApplication a(argc, argv);

    MainWindow w1;

    w1.resize(300, 200);

    w1.setWindowTitle("Time now!");

    time_t* now;

    QLabel *text1 = new QLabel(ctime(&now));
    text1->setParent(&w1);

    QPushButton *btn1 = new QPushButton("Leave");
    btn1->setParent(&w1);

    QObject::connect(btn1, &QPushButton::clicked, btn1_callback);

    w1->show();
    return a.exec();
}