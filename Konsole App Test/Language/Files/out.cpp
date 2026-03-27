#include <iostream>
#include <string>

using namespace std;

void outputz() {
    cout << "> ";
    string write;
    cin >> write;

    cout << "RUN? ";
    string quw;
    cin >> quw;

    if (quw == "Y" || quw == "y") {
        cout << write << endl;
    } else {
        cout << "\033[31m OKAY! \033[0m" << endl;
    }
}