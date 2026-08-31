#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::out | ios::in | ios::app);
    file << "Hello World" << endl;
    file << "Hello coding world.." << endl;
    // file.seekp(-10, ios::end);
    file.seekg(-10, ios::end);
    file << "Start.. Working..." << endl;
    return 0;
}