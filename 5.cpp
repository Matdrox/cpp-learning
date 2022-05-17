#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void arrays() {  // Static (fixed size)
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
    numbersLatin = {{"one", "unus"}, {"two", "duo"}, {"three", "tres"}, {"four", "quattuor"}, {"five", "quinque"}};
    for (auto i = numbersLatin.begin(); i != numbersLatin.end(); i++) {
        cout << i->first << ":";    // i->first: key
        cout << i->second << endl;  // i->second: value
    }
}

void sets() {
    unordered_set<int> set1 = {3, 6, 4, 1, 10};
    int num = 4;
    if (set1.find(num) == set1.end()) {  // If set.find() can't find num before reaching set.end(), num doesn't exist
        cout << "Number " << num << " is not in the set." << endl;
    } else {
        cout << "Number " << num << " is in the set." << endl;
    }
}

int main() {
    // arrays();
    // vectors();
    // strings();
    // dicts();
    sets();
    //  cout << __cplusplus <<  endl;  // Check C++ Version
    return 0;
}