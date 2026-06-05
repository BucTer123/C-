#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

void create_dir(std::string dir) {
    std::filesystem::create_directory(dir);
    std::cout << "Created " << dir << std::endl;
}

void remove_dir(std::string dir_rem) {
    std::filesystem::remove_all(dir_rem);
    std::cout << "Removed " << dir_rem << std::endl;
}

void remove_file(std::string file_name_rem) {
    std::ifstream file(file_name_rem);
    std::cout << "Removed " << file_name_rem << std::endl;
}

void create_file(std::string file_name) {
    std::ofstream file(file_name);
    std::cout << "Created " << file_name << std::endl;
}

void list_files() {
    std::system("dir");
}