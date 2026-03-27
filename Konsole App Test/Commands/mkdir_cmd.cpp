#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
using namespace filesystem;

void cr() {
    cout << "> ";
    string mk;
    cin >> mk;

    create_directory(mk);
}