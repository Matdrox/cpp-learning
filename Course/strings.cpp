#include <iostream>

int main() {
    std::string name;

    // while (name.empty()) {
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // }

	do {
		std::cout << "Enter your name: ";
		std::getline(std::cin, name);
	} while (name.empty());

    if (name.empty()) {
        std::cout << "You didn't enter a name" << std::endl;
        return 0;
    }

    if (name.length() > 7) {
        std::cout << "Your name is too long lmao" << std::endl;
    } else {
        name.append(" the Great");
        name.insert(0, "Mr. ");
        std::cout << "Hello " << name << std::endl;
    }

    return 0;
}