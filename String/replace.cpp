// replace (pos, len, str)

#include <iostream>
using namespace std;

int main() {
    string str1;
    str1 = "121565";
    string str3("Hello world!!!\n");
    string str2 = str1;
    str3.append("Good Morning...");
    str3.replace(6,7,"Programmers..");
    cout << str3 << endl;
    return 0;
}

/* replace(Starting index, last index )
   so str3.replace(6,7,"Programmers..");
   start from 6th index and then remove 7 elements
   */