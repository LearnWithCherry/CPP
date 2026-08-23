#include <iostream>
using namespace std;

int main() {
    void* ptr;
    int a;
    ptr = &a;
    cout << *(int *)ptr << "\n";
    char b = 'A';
    ptr = &b;
    cout << *(char *) ptr << "\n";
    int a = 10;
float b = 3.14;
char c = 'X';

void* ptr;  // void pointer

ptr = &a;   // points to int
ptr = &b;   // now points to float
ptr = &c;   // now points to char


    return 0;
}