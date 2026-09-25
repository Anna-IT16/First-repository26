#include <iostream>
#include <string>

int main() {
	std::locale::global(std::locale(""));
	std::cout << "Введите приветствие: ";
	std::string str;
	std::getline(std::cin, str);
	std::cout << str << std::endl;
}