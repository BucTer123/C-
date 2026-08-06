#include <ncurses.h>
#include "ui.h"

int main() {
	initscr();
	echo();

	mvprintw(10, 10, "Hi!");
	mvprintw(20, 10, "Press c to continue or e to exit");

	ch = getch();

	if (ch == 'c') {
		mvprintw(30, 10, "Starting!");
		starting_ui();
	} else {
		mvprintw(30, 10, "Bye!");
		exit(0);
	}
	
	endwin();
	return 0;
}
