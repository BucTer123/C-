#include <iostream>
#include <string>
#include "render_file.h"
#include <filesystem>

using namespace filesystem;

void function_render() {
	std::cout << "Welcome!" << std::endl;
	std::cout << "Rendering...." << std::endl;
	create_directory("render_directory");
}