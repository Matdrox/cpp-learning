#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream in_stream;
    ofstream out_stream;

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

    while (!in_stream.eof()) {  // While End of File has not been reached
        break;
    }

    while (in_stream >> inputn) {  // While there is content to be read
        break;
    }

    char filename[16];  // Reserves 16 characters for a file name

    return 0;
}