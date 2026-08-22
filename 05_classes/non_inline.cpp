#include <iostream>
using namespace std;

class Car {
    string brand;
public:
    void setBrand(string b);   // only declared
    void display();            // only declared
};

// defined outside class
void Car::setBrand(string b) {
    brand = b;
}

void Car::display() {
    cout << "Car brand: " << brand << endl;
}

int main() {
    Car c;
    c.setBrand("BMW");
    c.display();
}
