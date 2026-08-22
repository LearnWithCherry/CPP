#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;
    if (a >= b){
        cout << "Value of A is greater so addition is perfrom - " << a + b <<"\n";
    }else{
        cout << "Value of B is greater so subtraction is perfrom - " << a - b << "\n";
    }
    return 0;

}