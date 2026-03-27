#include <iostream>
#include <string>
#include "Files/out.h"
#include "Files/inp.h"

using namespace std;

void lng() {
    cout << "> ";
    string lng_input;

    if (lng_input == "output") {
        outputz();
    }
    if (lng_input == "input") {
        inputz();
    }
}