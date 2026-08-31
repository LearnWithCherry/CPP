#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt"); // open file for writing
    if (!fout) {
        cout << "File not created!" << endl;
        return 1;
    }
    fout << "Hello, this is C++ file handling.\n";
    fout << "Second line of text.";
    fout.close(); // closing file
    cout << "Data written successfully.\n";
    return 0;
}
