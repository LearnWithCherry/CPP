#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10);  // dynamic memory
    delete ptr;              // memory freed
    cout << *ptr << endl;    // ❌ dangling pointer! undefined

    return 0;
}