#include <iostream>
#include <ncurses.h>
#include "video_web.h"
int main() {
    initscr();
    echo();

    mvprintw(10, 10, "Welcome, press s to start and e to exit");

    ch = getch();

    if (ch == 's') {
        video();
    } else {
        exit(0);
    }
    
    endwin();
    return 0;
}
