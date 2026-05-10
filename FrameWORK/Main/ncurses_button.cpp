#include <ncurses.h>
#include <unistd.h>
#include "ncurses_button.h"

void easy_button_ncurses() {
		initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);

    int ch;
    int selected = 0;

    while (true) {
        clear();

        if (selected == 0) attron(A_REVERSE);
        mvprintw(52, 53, "[ CLICK! ]");
        if (selected == 0) attroff(A_REVERSE);

        refresh();

        ch = getch();

        if (ch == KEY_UP || ch == KEY_DOWN) {
            selected = 0; 
        } else if (ch == '\n') {
            mvprintw(50, 60, "BUTTON PRESSED!!");
            refresh();
            getch();
            break;
        }
    }

    endwin();
}