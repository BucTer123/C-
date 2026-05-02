#include <iostream>
#include <string>
#include "app.h"

using namespace std;

int main() {
	cout << "<><><> WELCOME! <><><>" << endl;
	cout << "Do you want to start? (y/n) :";
	string question;
	cin >> question;
	
	if (question == "Y" || question == "y") {
		cout << "Starting fun_app ....." << endl;
		app();
	} else {
		cout << "Bye!" << endl;
		return 0;
	}
}