#include <iostream>
using namespace std;
class XYZ{
    public:
        int n;
        XYZ(int i){n = i;cout << "Constructor Called for " << n << endl;}
        ~XYZ(){cout << "Distructor called for " << n << endl;}
};
int main() {
    XYZ x1(1);{
        XYZ x2(2);{
            XYZ x3(3);
        }
        XYZ x4(4);
        XYZ x5(5);
    }
    return 0;
}