#include <iostream>
using namespace std;

int main() {
    string str1;
    str1 = "121565";
    string str3("Hello world!!!\n");
    string str2 = str1;
    str3.append("Good Morning...");
    cout << str3 << endl;
    return 0;
}