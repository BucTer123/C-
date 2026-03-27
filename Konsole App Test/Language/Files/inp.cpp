#include <iostream>
#include <string>

using namespace std;

void inputz() {
    cout << "> ";
    string input;
    cin >> input;

    cout << "> ";
    string input2;
    cin >> input2;

    cout << "RUN ?";
    string qwu;
    cin >> qwu;

    if (qwu == "Y" || qwu == "y") {
        cout << input << endl;
        string newinput = input2;
        cin >> newinput;

        if (newinput == "exit") {
            exit(0);
        } else {
            cout << newinput << endl;
        }
    }
}