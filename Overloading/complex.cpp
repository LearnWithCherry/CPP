using namespace std;
#include <iostream>
class Complex {
public:

    int r, i;
    Complex(int x, int y) : r(x), i(y) {}
    
    Complex operator+(Complex obj) {
        return Complex(r + obj.r, i + obj.i);

    }
    Complex operator-(Complex obj) {
        return Complex(r - obj.r, i - obj.i);

    }

    Complex operator +=(Complex &obj) {
        r += obj.r;
        i += obj.i;
        return *this; 
    }
        
    Complex operator -=(Complex &obj) {
        r -= obj.r;
        i -= obj.i;
        return *this; 
    }

    void print() {
        cout << r << " + " << i << "i" << endl;
    }
};

int main() {
    Complex a(1, 2), b(3, 4), d(5, 6);

    a.print();
    b.print();
    d.print();

    Complex c = a + b - d;
    c.print();

    return 0;
}                