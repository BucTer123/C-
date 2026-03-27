#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void cpnt() {
    while (true) {
        vector <string> lines;
        ofstream filz;

        if (!lines.empty() && lines.back() == ":exit") {
            filz.close();
            break;
        }
        if (!lines.empty() && lines.back() == ":save") {
            cout << "> ";
            string sv;
            cin >> sv;

            ofstream fila(sv);
            filz.close();
        }
    }
}