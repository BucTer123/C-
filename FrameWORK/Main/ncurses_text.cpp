#include <ncurses.h>
#include <unistd.h>
#include "ncurses_test.h"

void easy_ncurses_function() {
	initscr();
	echo();
	
	mvprintw(10, 10, "Hello World!");
	refresh();
	
	endwin();
	return 0;
}