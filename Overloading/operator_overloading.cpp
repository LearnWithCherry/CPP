#include <iostream>
using namespace std;

class complex {
    int real;
    int imaginary;
public:
    complex(int r, int i) : real(r), imaginary(i) {}
    void print() {
        cout << real << " + " << imaginary << " i" << endl;
    }
};

int main() {
    complex a(2,7), b(7,10);
    a.print();
    b.print();
    return 0;
}
