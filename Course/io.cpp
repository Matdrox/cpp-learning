#include <iostream>

int main() {
	std::string name;
	std::cout << "Enter your name: ";
	// std::cin >> name;	// Only reads until the first space
	std::getline(std::cin >> std::ws, name);	// Reads the entire line
	std::cout << "Hello " << name << std::endl;

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	std::cout << "You are " << age << " years old" << std::endl;

	return 0;
}