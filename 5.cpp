#include <iostream>
#include <vector>
#include <string>

void arrays() {  // Static
    int array1[] = {2, 3, 4, 5};
    for (int i = 0; i < 7; i++) {
        // Even if the loop is outside the array length, it will still continue and not throw an error
        // array1[i] = 0;  // This line makes the loop infinite (but why)
        std::cout << array1[i] << std::endl;  // Weird values after looping outside of its range
        std::cout << "id: " << &array1[i] << std::endl;
    }

    int arraySize = sizeof(array1) / sizeof(array1[0]);  // Size = All the memory / one character's memory
    std::cout << "Array Size: " << arraySize << std::endl;
}

void vectors() {  // Dynamic (can change size)
    std::vector<int> vector1;
    vector1.reserve(50);  // Equivalent of saying: int array[50]. Always good to reserve memory!

    for (int i = 0; i < 50; i++) {
        vector1.push_back(i * i);
    }

    std::cout << "Vector size: " << vector1.size() << std::endl;
}

void strings() {
    std::string string1 = "Hello";
    std::string string2 = "World";
    std::string string3;

    string3 = string1 + " " + string2;
    std::cout << string3 << std::endl;
    std::cout << string2 << " begins at index " << string3.find(string2) << std::endl;
}

int main() {
    arrays();
    vectors();
    strings();
    return 0;
}