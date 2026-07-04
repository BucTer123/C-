#include <raylib.h>
#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>

void btn1_callback() {
    exit(0);
}

void create_inventory() {
    Fl_Window *win1 = new Fl_Window(800, 600, "Inventory");

    Fl_Button *btn1 = new Fl_Button(400, 10, 20, 20, "Leave ");
    btn1->show();
    btn1->callback(btn1_callback); 

    Fl_Button *btn2 = new Fl_Button(400, 20, 20, 20, "Close Inventory");
    btn2->show();
    btn2->callback(btn1_callback);

    win1->show();
    return Fl::run();
    exit(0);
}

int main() {
    Color WHITE = {255, 255, 255, 255};
    Color BLACK = (0, 0, 0, 255);
    Color BLUE = {0, 0, 255, 255};
    InitWindow(800, 600, "kub");
    SetTargetFPS(120);

    Camera camera = { 0 };
    camera.position.x = -3.0f;
    camera.position.y = 1.0f;

    const int screenWidth = 800;
    const int screenHeight = 600;

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("CUBE!", 400, 10, 10, BLACK);

        if (IsKeyDown(KEY_E)) {
            exit(0);
        }
        else if (IsKeyDown(KEY_W)) {
            camera.position.y + 10;
        }
        else if (IsKeyDown(KEY_S)) {
            camera.position.y - 10;
        }
        else if (IsKeyDown(KEY_A)) {
            camera.position.x + 10;
        }
        else if (IsKeyDown(KEY_D)) {
            camera.position.x - 10;
        }
        else if (IsKeyDown(KEY_I)) {
            create_inventory();
        }

        DrawCube(camera.position, 1, 1, 1, BLUE);

        EndDrawing();
    }

    CloseWindow();
}