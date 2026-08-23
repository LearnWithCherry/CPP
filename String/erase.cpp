#include <iostream>
using namespace std;

int main() {
    string str1;
    str1 = "121565";
    string str3("Hello wwwworld!!!\n");
    string str2 = str1;
    str3.append("Good Morning...");
    str3.erase(6,3);
    cout << str3 << endl;
    return 0;
}