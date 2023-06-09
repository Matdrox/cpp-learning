#include <iostream>

int main() {
	const double PI = 3.1415926535;		//Const makes in unchangeable [uppercase]
	double radius = 10;
	double area = PI * radius * radius;

	//PI = 420.69;	//Error

	std::cout << "Area: " << area << std::endl;

	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	

	return 0;
}