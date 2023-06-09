#include <ctime>
#include <iostream>

int main() {
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;  // 1-6
    int num2 = (rand() % 6) + 1;  // 1-6
    int num3 = (rand() % 6) + 1;  // 1-6
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    int randNum = rand() % 5 + 1;
    switch (randNum) {
        case 1:
            std::cout << "You win a bumper sticker!" << std::endl;
            break;
		case 2:
			std::cout << "You win a t-shirt!" << std::endl;
			break;
		case 3:
			std::cout << "You win a coffee mug!" << std::endl;
			break;
		case 4:
			std::cout << "You win a book!" << std::endl;
			break;
		case 5:
			std::cout << "You win a new car!" << std::endl;
			break;
    }
    return 0;
}