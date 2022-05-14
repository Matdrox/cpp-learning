#include <iostream>

// Pass by reference (&) uses the variable's memory - change to parameters also affect arguments
void swap_values(int &var1, int &var2) {
    int temp;

    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    int num1 = 4;
    int num2 = 5;

    std::cout << "Before swap: " << num1 << ", " << num2 << std::endl;

    swap_values(num1, num2);  // Arguments
    std::cout << "After swap: " << num1 << ", " << num2 << std::endl;
}