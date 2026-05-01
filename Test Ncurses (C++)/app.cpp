#include <iostream>
#include <string>
#include <ncurses.h>
#include <unistd.h>
#include <cstdlib>
#include "app.h"

using namespace std;

void writetext_animation() {
	cout << "> ";
	string text;
	cin.ignore();
	getline(cin, text);
	
	initscr();
	noecho();
	curs_set(FALSE);
	
	int maxY, maxX;
	
	int z = 0;
	
	for (z = 0; z < maxX; z++) {
		clear();
		getmaxyx(stdscr, maxY, maxX);
		mvprintw(maxY / 2, z % maxX, text.c_str());
		refresh();
		usleep(50000);
	}
	
	getch();
	endwin();
}

void reshetka_animation() {
	initscr();
	noecho();
	curs_set(FALSE);
	
	int maxY, maxX;
	
	for (int w = 0; w < maxX; w++) {
		clear();
		mvprintw(maxY / 2, w % maxX,  "#*#*&^");
		refresh();
		usleep(50000);
	}
	
	getch();
	endwin();
}

void sobaka_animation() {
	initscr();
	noecho();
	curs_set(FALSE);
	int maxY, maxX;
	
	for (int q = 0; q < maxX; q++) {
		clear();
		mvprintw(maxY / 2, q % maxX, "@*@*&^");
		refresh();
		usleep(50000);
	}
	getch();
	endwin();
}


void colortext_function() {
	cout << "Write text :";
	string textname;
	cin >> textname;
	
	cout << "Write color text :";
	string colortext;
	cin >> colortext;
	
	if (colortext == "what?") {
		
		cout << "_______________" << endl;
		cout << "|	RED					" << endl;
		cout << "|	GREEN			" << endl;
		cout << "|	YELLOW			" << endl;
		cout << "|	BLUE				" << endl;
		cout << "|  MAGENTA 		" << endl;
		cout << "|	CYAN				" << endl;
		cout << "_______________" << endl;
	}
	else if (colortext == "RED") {
		cout << "\033[31m " << textname << " \033[0m" << endl;
	}
	else if (colortext == "GREEN") {
		cout << "\033[32m " << textname << " \033[0m" << endl;
	}
	else if (colortext == "YELLOW") {
		cout << "\033[33m " << textname << " \033[0m" << endl;
	}
	else if (colortext == "BLUE") {
		cout << "\033[34m " << textname << " \033[0m" << endl;
	}
	else if (colortext == "MAGENTA") {
		cout << "\033[35m " << textname << " \033[0m" << endl;
	}
	else if (colortext == "CYAN") {
		cout << "\033[36m " << textname << " \033[0m" << endl;
	}
}

void animations_function() {
		cout << "_______________" << endl;
		cout << "|	Animations :		" << endl;
		cout << "| ----------------------	" << endl;
		cout << "|	1 => @				" << endl;
		cout << "|	2 => #				" << endl;
		cout << "|	3 => writetext	" << endl;
		cout << "_______________" << endl;
			
		cout << "Choice :";
		int a;
		cin >> a;
			
		if (a == 1) {
			sobaka_animation();
		}
		else if (a == 2) {
			reshetka_animation();
		}
		else if (a == 3) {
			writetext_animation();
		}
}

void leave_function() {
	cout << "Write do you want leave? (y/n) :" << endl;
	string question;
	cin >> question;
	
	if (question == "y") {
		cout << "Bye!" << endl;
	} else {
		cout << "Тогда нахуй зашел? " << endl;
	}
}

void help() {
	cout << "__________________" << endl;
	cout << "|	1 => help          	" << endl;
	cout << "| 	2 => animations	" << endl;
	cout << "| 	3 => figlettext   		" << endl;
	cout << "| 	4 => colortext   		" << endl;
	cout << "__________________" << endl;
}

void figlettext_function() {
	cout << "> ";
	string namefiglet;
	cin.ignore();
	getline(cin, namefiglet);
	
	string name = "figlet "  + namefiglet;
	system(name.c_str());
}

void ncursez() {
	cout << "\033[33m Hi! \033[0m" << endl;
	
	cout << "_______________" << endl;
	cout << "|1 => help 			" << endl;
	cout << "|2 => animations  " << endl;
	cout << "|3 => figlettext		" << endl;
	cout << "|4 => colortext		" << endl;
	cout << "|5 => exit				" << endl;
	cout << "_______________" << endl;
	
	cout << "Choice option :";
	int c;
	cin >> c;
		
	if (c == 1) {
		help();
	}
	else if (c == 2) {
		animations_function();
	}
	else if (c == 3) {
		figlettext_function();
	}
	else if (c == 4) {
		colortext_function();
	}
	else if (c == 5) {
		leave_function();
	}
}