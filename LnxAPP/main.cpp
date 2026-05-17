#include <iostream>
#include <string>
#include "lnxapp.h"

using namespace std;

int main() {
	cout << "Do you want to start? (y/n) :";
	string question;
	cin >> question;
	
	if (question == "y" || question == "Y") {
		cout << "Starting...." << endl;
		app();
	} else {
		return 0;
	}
}