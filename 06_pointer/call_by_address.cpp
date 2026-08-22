#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int a = 20;

    ptr = &a;
    cout << "Address of A is: "<<&a << "\nAddress of pointer: "<< & ptr << "\n";
    *ptr = 50;
    cout << "The new value is stored at this address: "<< *ptr << "\n";
    int b = 50;
    ptr = &b;
    cout << a << " " << b << " " << *ptr << "\n"; 
    return 0;

}