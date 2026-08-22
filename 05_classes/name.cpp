#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    string name;
    int age;
    float cgpa;

public:
    // Constructor
    Student(string n, int a, float c) {
        name = n;
        age = a;
        cgpa = c;
    }

    // Method to display details
    void displayInfo() {
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }

    // Method to update CGPA
    void updateCgpa(float newCgpa) {
        cgpa = newCgpa;
        cout << "CGPA updated successfully!" << endl;
    }
};

int main() {
    // Creating an object of Student
    Student s1("Cherry", 19, 8.5);

    // Displaying info
    s1.displayInfo();

    // Updating CGPA
    s1.updateCgpa(9.1);
    s1.displayInfo();

    return 0;
}
