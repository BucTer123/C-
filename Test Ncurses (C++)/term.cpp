#include <iostream>
#include <string>
#include "app.h"

using namespace std;

int main() {
	cout << "Welcome!" << endl;
	cout << "Do you want to start? (y/n) :";
	string startquestion;
	cin >> startquestion;
	
	if (startquestion == "Y" || startquestion == "y") {
		cout << "Starting ...." << endl;
		ncursez
	} else {
		cout << "\033[31m BYE! \033[0m" << endl;
		return 0;
	}
}