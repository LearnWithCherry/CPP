#include <iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fileout("data.txt");
    ifstream filein("data.txt");
    fileout << "Hello World....\n";
    fileout << "My name is Rajat Bhardwaj..";

    string str, str2;
    fileout.close();
    getline(filein, str);
    getline(filein, str2);
    cout << str << endl;
    cout << str2 << endl;
    return 0;
}