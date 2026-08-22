#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a;
    int &c = a;

    cout << a << " " << b << " " << c << "\n";
    b = 40;
    cout << a << " " << b << " " << c << "\n";
    c = 69;
    cout << a << " " << b << " " << c << "\n";

    return 0;
}