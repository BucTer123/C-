#include <QApplication>
#include <QString>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QObject>
#include <QLineEdit>
#include <raylib.h>

void open_inventory() {
    QWidget w3;
    w3.resize(300, 200);
    w3.setWindowTitle("Inventory");
    w3.setObjectName("w3");
    w3.setStyleSheet(
        "#w3 {";
        "   background: white";
        "}";
    );

    QPushButton *b5 = new QPushButton("Close Inventory", &w3);
    b5->move(150, 10);
    b5.setObjectName("b5");
    b5.setStyleSheet(
        "#b5 {";
        "   background: black";
        "   color: white";
        "   font-family: sans-serif";
        "   font-weight: bolder";
        "}";
    );

    QObject::connect(b5, &QPushButton::clicked, [] () {
        w3.end();
        game();
    });

    QPushButton *b6 = new QPushButton("Leave", &w3);
    b6->move(150, 20);
    b6.setObjectName("b6");
    b6.setStyleSheet(
        "#b6 {";
        "   background: black";
        "   color: white";
        "   font-family: sans-serif";
        "   font-weight: bolder";
        "}";
    );
    QObject::connect(b6, &QPushButton::clicked, [] () {
        w3.end();
        exit(0);
    });

    w3.show();
}

void game() {
    Color WHITE = {255, 255, 255, 255};
    Color BLACK = {0, 0, 0, 255};
    Color RED = {255, 0, 0, 255};
    Color BLUE = {0, 0, 255, 255};
    Color GREEN = {0, 255, 0, 255};
    InitWindow(800, 600, "Game");
    SetTargetFPS(120);

    const int screenWidth = 800;
    const int screenHeight = 600;

    Camera player_position = { 0 };
    player.position.x = { 400 };
    player.position.y = { 300 };

    while (WindowShouldClose() == false) {

        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangleRoundedGradientH(player_position, 0.8f, 0.8f, 36, BLUE, RED);

        if (IsKeyDown(K_E)) {
            WindowShouldClose() == true;
            exit(0);
        }
        else if (IsKeyDown(K_W)) {
            player.position.x += 30;
        }
        else if (IsKeyDown(K_S)) {
            player.position.x -= 30;
        }
        else if (IsKeyDown(K_A)) {
            player.position.y += 30;
        }
        else if (IsKeyDown(K_D)) {
            player.position.y -= 30;
        }
        else if (IsKeyDown(K_I)) {
            open_inventory();
        }

        EndDrawing();
        CloseWIndow();
        exit(0);
    }
}

void settings() {
    QWidget w2;
    w2.resize(640, 480);
    w2.setWindowTitle("Settings");
    w2.setObjectName("w2");
    w2.setStyleSheet(
        "#w2 {";
        "   background: white";
        "}";
    );

    QPushButton *btn4 = new QPushButton("Close Settings", &w);
    btn4->move(320, 10);
    btn4.setObjectName("b4");
    btn4.setStyleSheet(
        "#b4 {";
        "   background: black";
        "   color: white";
        "   font-family: sans-serif";
        "   font-weight: bolder";
        "}";
    );
    QObject::connect(btn4, &QPushButton::clicked, [] () {
        w2.end();
        exit(0);
    });

    w2.show();
}

int main(int argc, char** argv) {
    QApplication app(&argc, &argv);

    QMainWindow w;
    w.resize(800, 600);
    w.setWindowTitle("Menu");
    w.setObjectName("w1");
    w.setStyleSheet(
        "#w1 {";
        "   background: white";
        "}"
    );

    QLabel *text_main = new QLabel("Welcome!", &w);
    text_main->move(400, 10);
    text_main.setObjectName("#txt1");
    text_main.setStyleSheet(
        "#txt1 {";
        "   background: white";
        "   color: black";
        "   font-family: sans-serif";
        "   font-size: medium";
        "   font-weight: bolder";
        "   padding: 10px";
        "   margin: 5px";
        "}";
    );
    
    QPushButton *btn1 = new QPushButton("Start", &w);
    btn1->move(400, 30);
    btn1.setObjectName("b1");
    btn1.setStyleSheet(
        "#b1 {";
        "   background: black";
        "   color: white";
        "   padding: 20px";
        "   margin: 10px";
        "}";
    );
    QObject::connect(btn1, &QPushButton::clicked, [] () {
        game();
    });

    QPushButton *btn2 = new QPushButton("Settings", &w);
    btn2->move(400, 40);
    btn2.setObjectName("b2");
    btn2.setStyleSheet(
        "#b2 {";
        "   background: black";
        "   color: white";
        "   padding: 20px";
        "   margin: 10px";
        "}";
    );
    QObject::connect(btn2, &QPushButton::clicked, [] () {
        settings();
    });

    QPushButton *btn3 = new QPushButton("Exit", &w);
    btn3->move(400, 50);
    btn3.setObjectName("b3");
    btn3.setStyleSheet(
        "b3 {";
        "   background: black";
        "   color: white";
        "   padding: 20px";
        "   margin: 10px";
        "}";
    );
    QObject::connect(btn3, &QPushButton::clicked, [] () {
        w.end();
        exit(0);
    });

    w.show();
    return app.exec();
}