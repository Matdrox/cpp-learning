#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream in_stream;   // Input stream: read text from file
    ofstream out_stream;  // Output stream: write text to file

    // set(): Set flags (Member function)
    cout.setf(ios::fixed);      // Use fixed point instead of scientific notation
    cout.setf(ios::showpoint);  // Show the decimal point
    cout.precision(2);          // Display 2 digits of precision

    in_stream.open("my_file.txt");
    if (in_stream.fail()) {
        cout << "Sorry, the file couldn't be opened!" << endl;
        exit(1);  // 1 means true: an error DID happen
    }

    out_stream.open("another_file.txt");  // Creates empty file of overwrites old file
    out_stream << 25 << endl;
    out_stream << 15 << endl;

    in_stream.close();
    out_stream.close();

    int inputn;
    in_stream >> inputn;
    in_stream >> inputn;  // The program remembers what character you're on!
    in_stream >> inputn;

    while (!in_stream.eof()) {  // While End of File has not been reached
        break;
    }

    while (in_stream >> inputn) {  // While there is content to be read
        break;
    }

    // C-strings should only be used when working with file names
    char filename[16];  // C-string: Reserves 15 characters for a file name (+ \0)

    return 0;
}