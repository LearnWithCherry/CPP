#include<iostream>
using namespace std;

class Car {
public:
    string engine;
    string brandname;
    string carname;
    string color;
    int seating;
    int CC;
};

void printCar(Car c) {
    cout << "Brand Name: " << c.brandname 
         << "\nEngine: " << c.engine
         << "\nCar Name: " << c.carname
         << "\nColor: " << c.color
         << "\nSeating: " << c.seating
         << "\nCC: " << c.CC << "\n";
}

int main() {
    Car details;
    // first assign values
    details.engine = "V8";
    details.brandname = "BMW";
    details.carname = "M5 CS";
    details.color = "black";
    details.seating = 5;
    details.CC = 5500;

    Car car1;
    car1.engine = "V6";
    car1.color = "Blackish red";
    // car1.printCar();


//     // then print them
    // printCar(details);

    // cout << "Brand Name is " << details.brandname 
    //      << "\nEngine is about " << details.engine
    //      << "\nCar name is " << details.carname
    //      << "\nEngine size is " << details.CC
    //      << "\nTotal seating capacity is " << details.seating << "\n";

//     cout << sizeof(Car) << "\n"; // to check size of this class
    return 0;
}

/*
class
object
create class
data member 
member function 
create object 
accesss data member 
accesss member fucntion
*/