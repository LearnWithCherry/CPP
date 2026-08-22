#include <iostream>
using namespace std;
void add(int a, int b){
    cout << a + b << "\n";
    add(a, b);
}
int main() {
    add(5, 5);
    return 0;
}