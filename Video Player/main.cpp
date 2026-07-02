#include <iostream>
#include <string>
#include "video_web.h"

using namespace std;

int main() {
    cout << "Hi!" << endl;
    cout << "Do you want to start? (y/n) :";
    string c;
    cin >> c;

    if (c == "y" || c == "Y") {
        video();
    } else {
        cout << "Bye!" << endl;
        exit(0);
    }
}