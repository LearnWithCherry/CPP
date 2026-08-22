#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Ente rvalue of B: ";
    cin >> b;
    cout << "Enter Operator  ";
    char o;
    cin >> o;      

    switch (o)
    {
    case '+': cout << a + b ;break;
    case '-': cout << a - b ;break;
    case '/': cout << a / b ;break;
    case '*': cout << a * b ;break;
    case '%': cout << a % b ;break;
    
    // also find how to find positive and negative and zero 
    
    }
}