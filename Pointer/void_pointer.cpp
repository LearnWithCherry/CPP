#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    void* ptr;   // void pointer

    // Pointing to int
    ptr = &a; // stores the address of a but it didn't know it typwe because of void so we use casting and tell value inside is and int type / & print the address of variable 
    cout << "Value of a = " << (*(int*)ptr) << endl; // prints value 
    cout << "Address of a = " << (int*)ptr << endl; // prints address 

    // Pointing to float
    ptr = &b; // ptr stores the address of b but it didn't know its type so we cast it and dereference it /  & print the address of variable 
    cout << "Value of b = " << *((float*)ptr) << endl; // prints value
    cout << "Address of b = " << (float*)ptr  << endl; // prints address

    // Pointing to char
    ptr = &c; // same case as above ptr - address / & print the address of variable 
    cout << "Value of c = " << *((char*)ptr) << endl; // prints value
    cout << "Address of c = " << ((void*)&c) << endl; // prints address

    return 0;
}
