#include <iostream>
using namespace std;

int * fun(){
    int a = 10;
    // cout << a << "\n";
    return 0;
}
int main() {
    int * ptr;
    ptr = fun();
    cout << *ptr << "\n";
    return 0;
}