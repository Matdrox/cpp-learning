#include <iostream>
using namespace std;

int main() {
    bool x = true;
    x = 4;
    cout << x << endl;   // Outputs 1 because anything except 0 means true
    cout << &x << endl;  // The address-of (&) is used to get the reference ID for the variable

    int varN = 9;  // Variable declaration
    int *ptrN;     // Pointer to an integer
    ptrN = &varN;  // Memory allocation for the variable

    cout << "varN value: " << varN << endl;
    cout << "varN location: " << ptrN << endl;
    cout << "ptrN location (dereference ptrN): " << *ptrN << endl;

    ptrN = nullptr;  // Null pointer sets the pointer to null
    cout << "ptrN value (after nullptr): " << ptrN << endl;

    return 0;
}