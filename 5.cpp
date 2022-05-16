#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void arrays() {  // Static
    int array1[] = {2, 3, 4, 5};
    for (int i = 0; i < 7; i++) {
        // Even if the loop is outside the array length, it will still continue and not throw an error
        // array1[i] = 0;  // This line makes the loop infinite (but why)
        cout << array1[i] << endl;  // Weird values after looping outside of its range
        cout << "id: " << &array1[i] << endl;
    }

    int arraySize = sizeof(array1) / sizeof(array1[0]);  // Size = All the memory / one character's memory
    cout << "Array Size: " << arraySize << endl;
}

void vectors() {  // Dynamic (can change size)
    vector<int> vector1;
    vector1.reserve(50);  // Equivalent of saying: int array[50]. Always good to reserve memory!

    for (int i = 0; i < 50; i++) {
        vector1.push_back(i * i);
    }

    cout << "Vector size: " << vector1.size() << endl;
}

void strings() {
    string string1 = "Hello";
    string string2 = "World";
    string string3;

    string3 = string1 + " " + string2;
    cout << string3 << endl;
    cout << string2 << " begins at index " << string3.find(string2) << endl;
}

void dicts() {
    unordered_map<string, string> numbersLatin;
}

int main() {
    // arrays();
    // vectors();
    // strings();
    dicts();
    //  cout << __cplusplus <<  endl;
    return 0;
}