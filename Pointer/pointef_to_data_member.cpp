#include <iostream>
using namespace std;
class test{
    public:
        int x;
};
int main() {
    test obj;
    int *ptr = &obj.x;
    obj.x = 40;
    cout << *ptr << endl;
    return 0;
}