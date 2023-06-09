#include <iostream>

int main() {
	int x = 3.14;
	std::cout << x << std::endl;	// 3

	double y = 3.14;
	std::cout << y << std::endl;	// 3.14

	double z = (int) 3.14;	// Converts 3.14 to an int, saves as a double
	std::cout << z << std::endl;	// 3

	std::cout << (char) 100 << std::endl;	// d

	int correct = 8;
	int questions = 10;
	double score = correct/(double) questions * 100;	// Converts questions to a double to avoid integer division

	std::cout << score << "%" << std::endl;	// 0

	return 0;
}