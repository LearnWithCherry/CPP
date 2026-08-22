#include<iostream>
using namespace std;

int main (){

    int n;
    int x = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(x < n){
        cout << x << "\n";
        x++;
    }
//-------------------------------------------------
    int a;
    int b = 0;
    cout << "Enter a number: ";
    cin >> a;
    while( b < a){
        cout << b << " ";
        b += 2;
    }
    return 0;
}
