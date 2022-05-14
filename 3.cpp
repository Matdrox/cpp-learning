#include <iostream>

int main() {
    int points = 85;
    
    if (points < 50) {
        std::cout << "Grade: F" << std::endl;
    } else if (points < 100) {
        std::cout << "Grade: P" << std::endl;
    }

    int tempPoints = points / 10;

    switch(tempPoints) {
        case 9:
            std::cout << "Grade: A" << std::endl;
            break;
        case 8:
            std::cout << "Grade: B" << std::endl;
            break;
        case 7:
            std::cout << "Grade: C" << std::endl;
            break;
        case 6:
            std::cout << "Grade: D" << std::endl;
            break;
        default:
            std::cout << "Grade: F" << std::endl;
        
    }
    return 0;
}