#include <iostream>
using namespace std;
int swap(int a, int b){
    a = a + b; // 15
    b = a - b; // 5
    a = a - b; // 10
    cout << a,b;
    
}
int main() {
    cout << swap(5,10);
    return 0;
}