#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt"); // open file for reading
    string line;
    while (getline(fin, line)) {  // read line by line
        cout << line << endl;
    }
    fin.close();
    return 0;
}
