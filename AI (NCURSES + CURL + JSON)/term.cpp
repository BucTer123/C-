#include <ncurses.h>
#include <iostream>
#include "pp.h"

int main() {
	initscr();
	echo();
	
	mvprintw(10, 10, "Do you want to start ? (y/n) :");
	char question[100];
	getstr(question);
	
	int butt = getch();
	
	if (butt == 'y') {
		start_ai();
	} else {
		break;
	}
	
	getch();
	endwin();
	return 0;
}