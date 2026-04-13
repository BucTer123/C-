#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main() {
    cout << "Welcome!" << endl;

    cout << "Do you want to start UI? (y/n) :";
    string que1;
    cin >> que1;

    if (que1 == "Y" || que1 == "y") {
        maintwo();
    } else {
        cout << "Okay!" << endl;
        cout << "Bye!" << endl;
        return 0;
    }
}