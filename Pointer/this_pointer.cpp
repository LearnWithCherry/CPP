#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Method using this pointer
    void setData(string name, int age) {
        this->name = name;   // "this->name" means object's name
        this->age = age;     // "this->age" means object's age
    }

    void introduce() {
        cout << "Hi, I'm " << this->name << " and I'm " << this->age << " years old.\n";
    }
};

int main() {
    Student s1, s2;

    s1.setData("Cherry", 19);
    s2.setData("Luffy", 25);

    s1.introduce();   // Hi, I'm Cherry and I'm 19 years old.
    s2.introduce();   // Hi, I'm Luffy and I'm 25 years old.

    return 0;
}
