#include <iostream>
using namespace std;

int main() {
    int value = 10;      // normal variable
    int* ptr = &value;   // pointer to variable
    int** ptr2 = &ptr;   // pointer to pointer

    cout << value << endl;    // 10 - just print the value 
    cout << *ptr << endl;     // 10 - value instead because if dereference operator
    cout << **ptr2 << endl;   // 10 - value instead because if dereference operator
}
