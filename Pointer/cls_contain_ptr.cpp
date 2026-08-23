#include <iostream>
using namespace std;

class Test{
    public:
        int * ptr;
        Test *t2;
};
int main() {
    Test t;
    int a   = 15;
    t.ptr = &a;
    t.t2 = &t;
    cout << t.t2 -> ptr << "\n";
    return 0;
}