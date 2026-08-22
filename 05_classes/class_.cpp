#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    string cls;
    void details(string n,int a,string c){
        name = n;
        age = a;
        cls = c;
    }
    void show_data(){
        cout << "Name: "<< name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Class: "<< cls << "\n";
    }
};
int main() {
    student s1;
    s1.details("Rajat",19,"CSE");
    s1.show_data();

    return 0;
}