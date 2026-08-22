#include<iostream>
using namespace std;
int x = 10; // global
int main(){
    {
        cout << x << "\n";
        int x = 20; // local
        cout << x << "\n";
        cout <<:: x << "\n";// give output of blobal variable not local.
    }
    int x = 40;
    {
        int x = 30;
        cout << x << "\n";
    }
    cout << x << "\n";
    //cout << y <<"\n"; //giving error because it is outside in function                 
    return 0;
}
