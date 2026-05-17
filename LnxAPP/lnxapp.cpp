#include <ncurses.h>
#include <unistd.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "lnxapp.h"

using namespace std;

void cache_clear_function() {
	int second_MaxY, second_MaxX;
	
	int z = 0;
	
	for (z = 0; z < second_MaxX; z++) {
		mvprintw(second_MaxY / 2, z % second_MaxX, "</> </> </>");
		mvprintw(second_MaxY / 2, z % second_MaxX, "Clearing cache.........");
		mvprintw(second_MaxY / 2, z % second_MaxX, "</> </> </>");
		usleep(50);
		system("sudo sync; eho 3 > /proc/sys/vm/drop_caches");
		system("echo 3 | sudo tee /proc/sys/vm/drop_caches");
		system("echo SHELL!!!!!");
		system("sudo swapoff -a ");
		system("sudo swapon -a ");
		system("sudo apt clean");
		system("echo Stopped!");
	}
}

void first_function() {
	initscr();
	noecho();
	curs_set(FALSE);
	
	int MaxX, MaxY;
	
	int i = 0; 
	
	for (i = 0; i < MaxX; i++) {
		clear();
		getmaxyx(stdscr, MaxY, MaxX);
		mvprintw(MaxY / 2, i % MaxX, "</> </> </>");
		mvprintw(MaxY / 2, i % MaxX, "Starting......");
		mvprintw(MaxY / 2, i % MaxX, "</> </> </>");
		usleep(500);
	}
	clear();
	
	mvprintw(20, 30, "Do you want to clear cache? (y/n) :");
	
	int butt2 = getch();
	
	if (butt2 == 'y') {
		cache_clear_function();
	} else {
		mvprintw(20, 20, "Bye!");
		clear();
		endwin();
	}
	
	endwin();
}

void app() {
	initscr();
	echo();
	
	mvprintw(10, 10, "Welcome!");
	refresh();
	
	mvprintw(12, 10, "Press 'e' to exit or 'c' to continue :");
	refresh();
	
	int butt = getch();
	
	if (butt == 'e') {
		endwin();
		return 0;
	}
	
	else if (butt == 'c') {
		first_function();
	}
	
	endwin();
}