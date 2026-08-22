#include <iostream>
using namespace std;

class Student {
    int id;
    static int count;  // static data member

public:
    void setID(int x) {
        id = x;
        count++;   // increase shared value
    }

    void display() {
        cout << "ID: " << id << " | Count: " << count << endl;
    }
};

// Definition of static member
int Student::count = 0;

int main() {
    Student s1, s2, s3;
    s1.setID(101);
    s2.setID(102);
    s3.setID(103);

    s1.display();
    s2.display();
    s3.display();
}
