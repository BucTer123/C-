#include <iostream>
#include <string>
#include "audio_web.h"

using namespace std;

int main() {
    cout << "Hi!" << endl;
    cout << "Do you want to start? (y/n):";
    string c;
    cin >> c;

    if (c == "y" || c == "Y") {
        audio();
    } else {
        cout << "Bye!" << endl;
        return 0;
    }
}