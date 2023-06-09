#include <iostream>

bool checkEven(int x) {
    if (x % 2 == 0) {
        return true;
    }
	return false;
}

int main() {
    int x = 7;
    int y = 4;

    if (checkEven(x)) {
        std::cout << x << " is even" << std::endl;
    } else {
        std::cout << x << " is odd" << std::endl;
    }

    return 0;
}
