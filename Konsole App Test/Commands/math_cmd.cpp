#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void calculator() {
    cout << "\033[36m WELCOME ! \033[0m" << endl;
    float a;
    float b;
    string c;

    cout << "> ";
    cin >> a;
    cout << "> ";
    cin >> b;
    cout << "> ";
    cin >> c;

    if (c == "+") {
        float plus = a + b;
        cout << plus << endl;
    }
    if (c == "-") {
        float minus = a - b;
        cout << minus << endl;
    }
    if (c == "*") {
        float multi = a * b;
        cout << multi << endl;
    }
    if (c == "/") {
        if (b == 0) {
            cout << "\033[31m ERROR!: Divide by zero! \033[0m" << endl;
        } else {
            float divide = a / b;
            cout << divide << endl;
        }
    }
    if (c == "sin") {
        float sina = sinf(a);
        float sinb = sinf(b);

        cout << sina << endl;
        cout << sinb << endl;
    }
    if (c == "cos") {
        float cosa = cosf(a);
        float cosb = cosf(b);

        cout << cosa << endl;
        cout << cosb << endl;
    }
}