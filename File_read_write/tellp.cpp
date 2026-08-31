#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt",ios::out|ios::in|ios::ate);
    file << "Lets do it.."<< endl;
    file.seekp(-10, ios::end);
    cout << file.tellp() << endl;
    return 0;
}