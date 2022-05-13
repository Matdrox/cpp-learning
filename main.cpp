#include <iostream>
// #include <libraryname>   // Libraries or headers provided by implementation
// #include "filename"      // Libraries or headers that are cutsom made
using namespace std;

int main() {  // The OS automatically calls the main() function. Neccessary!
    float num;
    cout << "Give me a number: ";  // Output Operator <<

    cin >> num;

    cout << "This is your number doubled: " << num*2 << endl;

    return 0;
}