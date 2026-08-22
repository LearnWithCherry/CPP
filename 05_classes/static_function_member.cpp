#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;

    Student(string n) {
        name = n;
        count++;
    }

    // static function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// define static variable
int Student::count = 0;

int main() {
    Student s1("Cherry");
    Student s2("Rajat");

    // call static function using class name
    Student::showCount();

    return 0;
}
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;

    Student(string n) {
        name = n;
        count++;
    }

    // static function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// define static variable
int Student::count = 0;

int main() {
    Student s1("Cherry");
    Student s2("Rajat");

    // call static function using class name
    Student::showCount();

    return 0;
}
