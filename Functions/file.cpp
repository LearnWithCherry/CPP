/*
if, of, f steam
*/

#include <iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream file("open.txt");
    string str, str2, str3;
    cout << "str: ";
    cin >> str;
    cout << "str2: ";
    getline(cin ,str2);
    
    cout << "Str: "<< str << "\n";
    cout << "Str2: "<< str2 << "\n";

    file.close();
    file.open("open.txt");
    getline(file, str3);
    cout << str3 << endl;
    return 0;
}