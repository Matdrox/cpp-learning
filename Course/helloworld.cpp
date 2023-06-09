#include <iostream>

int main() {
	// Standard character output stream. "<<": output operator
	std::cout << "Hello World!" << std::endl;
	std::cout << "Okayyy" << '\n';

	// Endline is better - flushes the output buffer
	std::cout << "Interesting" << std::endl;

	// Declaration
	int x;
	//Assignment
	x = 7;

	int y = 5;
	int sum = x + y;

	double price = 10.99;
	double taxRate = 0.08;

	char grade = 'A';
	char initial = 'M';
	std::cout << "Hello " << initial << " with grade "<< grade << std::endl;

	bool isStudent = true;
	bool isSmart = false;

	std::string name = "Matei";

	// If 0: success, else if 1: failure
	return 0;
}