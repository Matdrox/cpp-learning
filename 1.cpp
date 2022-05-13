/*
Interpreter - Fast start, slow run, line by line
Compiler - Slow start, fast run, all the file at once
*/

#include <iostream>
// #include <libraryname>   // Libraries or headers provided by implementation
// #include "filename"      // Libraries or headers that are cutsom made
using namespace std;

int main() {  // The OS automatically calls the main() function. Neccessary!
    float num;
    cout << "Give me a number: ";  // Output Operator <<

    cin >> num;  // Input operator >>

    cout << "This is your number doubled: " << num * 2 << endl;  // << acts like python's +

    return 0;
}