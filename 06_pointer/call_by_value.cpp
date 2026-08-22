/*call by reference , value*/
#include <iostream>
using namespace std;
void add(int a , int b ){
// void add(int &a , int &b ){
    cout << "Before: "<<a << "\n";
    a = a + b;
    cout << "After: "<<a << "\n";
}
int main() {
    int a = 20;
    int b = 30;
    add(a,b);
    cout << "Adding both vales: " << a << "\n";

    return 0;
}