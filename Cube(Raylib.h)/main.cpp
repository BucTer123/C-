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
    InitWindow(800, 600, "Cube");
    SetTargetFPS(120);

    const int ScreenWidth = 800;
    const int ScreenHeight = 600;
    
    Vector2 position;
    Vector2 cube_size = {100, 100};
    Vector2 cube_default = {100, 100};

    cube_position = (Vector2){GetScreenWidth()/2 - cube_size.x/2, GetScreenHeight()/2 - cube_size.y/2};
    
    while (!WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("CUBE!", 400, 10, 10, BLACK);

        if (IsKeyDown(KEY_E)) {
            exit(0);
        }
        else if (IsKeyDown(KEY_W)) {
            cube_position.y + 10;
        }
        else if (IsKeyDown(KEY_S)) {
            cube_position.y - 10;
        }
        else if (IsKeyDown(KEY_A)) {
            cube_position.x + 10;
        }
        else if (IsKeyDown(KEY_D)) {
            cube_position.x - 10;
        }
        else if (IsKeyDown(KEY_I)) {
            create_inventory();
        }

        DrawCube(cube_position, 1, 1, 1, BLUE);

        EndDrawing();
    }

    CloseWindow();
}
