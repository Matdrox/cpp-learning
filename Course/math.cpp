#include <iostream>
#include <cmath>

int main() {
	double z;

	z = std::max(4, 19);

	z = pow(2, 4);
	z = sqrt(25);
	z = abs(-3);
	z = round(4.4);
	z = ceil(4.1);
	z = floor(4.9);
	std::cout << z << std::endl;

	double a;
	double b;
	double c;

	std::cout << "Enter side A: ";
	std::cin >> a;
	std::cout << "Enter side B: ";
	std::cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	// Ternary operator
	c > 7 ? std::cout << c << " - That hypothenuse is pretty big!" << std::endl : std::cout << c << " - That hypothenuse is pretty small!" << std::endl;

	return 0;
}