#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("R:\\CPPcode\\02_OOPS_202\\Unit-3\\data.txt", ios::in);
    file << "Hello world..";
    string str2;
    cin >> str2;
    cout << str2 << endl;
    
    return 0;
}