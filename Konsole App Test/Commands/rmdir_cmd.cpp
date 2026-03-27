#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
using namespace filesystem;

void remove_dir() {
    cout << "> ";
    string rd;
    cin >> rd;

    remove(rd);
}