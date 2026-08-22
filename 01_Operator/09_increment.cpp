#include<iostream>
using namespace std;

int main(){
    int a , b ;
    a = 0;
    b = 0;

    b = ++a; // show op first 
    cout << "b: " << b << "\na: " << a <<"\n";

    b = a++; // show op when called
    cout << "b: " << b << "\na: " << a <<"\n";


    return 0;
}
// output 
// b: 1
// a: 1
// b: 1
// a: 2