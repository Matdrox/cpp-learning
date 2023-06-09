#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;	//Typedefs are used to make code more readable [ends with _t]
typedef std::string text_t;

namespace first {
	int x = 1;
}

namespace second {
	int x = 2;
}

int main() {
	using namespace first;

	// int x = 0;
	//int x = 1;	//Error

	std::cout << x << std::endl;	// Uses the local x
	std::cout << first::x << std::endl;	// Uses the first namespace x
	std::cout << second::x << std::endl;	// Uses the second namespace x

	// using std	// Imports too many things
	using std::cout;	// Imports only cout
	using std::endl;

	std::string name = "Matei";
	cout << name << endl;

	pairlist_t pairlist;
	pairlist.push_back(std::make_pair("Matei", 20));

	text_t text = "Hello World!";
	cout << text << endl;

	using number_t = int;
	number_t number = 7;
	cout << number << endl;


	return 0;
}