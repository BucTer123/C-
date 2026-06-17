#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QObject>

void settings_function() {
    QWidget sett_win;
    sett_win.resize(640, 480);

    QLabel *txt = new QLabel("Нахуй смотриш?", &sett_win);
    txt->move(240, 20);

    QPushButton *bttn = new QPushButton("Exit", &sett_win);
    bttn->move(240, 30);

    QObject::connect(bttn, &QPushButton::clicked, [] () {
        exit(0);
    });

    sett_win.show();
}
