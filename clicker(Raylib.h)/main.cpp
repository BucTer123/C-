#include<raylib.h>
#include<iostream>
#include<string>

const int screenWidth = 640;
const int screenHeight = 480;
Camera2D camera;
Vector2 rect_position;
Vector2 rect_size = {100, 100};
Vector2 rect_default = {100, 100};
int clicks = 0;
int frames = 10;

int main(void) {
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	SetConfigFlags(FLAG_VSYNC_HINT);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	Color WHITE = {255, 255, 255, 255};
	Color BLACK = {0, 0, 0, 255};
	Color RED = {255, 0, 0, 255};
	Color GREEN = {0, 255, 0, 255};
	Color BLUE = {0, 0, 255, 255};

	InitWindow(640, 480, "Clicker");
	SetTargetFPS(120);

	while (!WindowShouldClose()) {
	
		frames += 1;

		BeginDrawing();
		BeginMode2D(camera);
		ClearBackground(WHITE);

		rect_position = (Vector2){GetScreenWidth()/2 - rect_size.x/2, GetScreenHeight()/2 - rect_size.y/2};

		DrawRectangle(rect_position.x, rect_position.y, rect_size.x, rect_size.y, BLUE);
		
		std::cout << clicks << std::endl;
		DrawText(str, rect_position.x + rect_size.x/2, rect_position.y+50, clicks, GREEN);
		
		DrawText();

		if (IsKeyDown(K_E)) {
			WindowShouldClose();
			exit(0);
		}

		else if (IsKeyDown(K_R)) {
			clicks += 1;
			frames = 0;
		}

		EndMode2D();
		EndDrawing();
		CloseWindow();
		return 0;
	}
}
