#include <iostream>
using namespace std;

double divide(double num1, double num2) {
    if (num2 == 0) {
        throw "Cannot divide by 0 lmaoooo\n";
    }
    return num1/num2;
}

int main() {
    int num1 = 10;
    int num2 = 0;

    try {
        double result = divide(num1, num2);
        cout << "Result of division: " << result << endl;
    }

    catch (const char *err) {
        // If an error is thrown, print it
        cout << err;
    }

    return 0;
}