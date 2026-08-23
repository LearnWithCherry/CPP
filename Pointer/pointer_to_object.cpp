#include <iostream>
using namespace std;

class test{
    public:
    int x;
};
int main() {
    test t, *ptr;
    ptr = &t;
    // t.x = 10;
    // t.printX();
    // (*ptr).x = 34;
    // (*ptr).printX();
    ptr->x = 54;
    // cout << t.x << "\n";
    // cout << (*ptr).x << "\n";
    cout << ptr->x<<"\n";
    ptr -> printX()
    return 0;
}