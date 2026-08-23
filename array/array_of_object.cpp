#include <iostream>
using namespace std;
class Student{
    public:
        string Name;
        int Roll;

        void setvalue(){
            cout << "Enter roll Number and Name: ";
            cin >> Roll >> Name;
        }
        void getvalue(){
            cout << "Name oF the student: " << Name << "\nRoll Number of Student: " << Roll;
        }
};
int main() {
    Student arr[2];  
    for(int i=0; i<2; i++){
        arr[i].setvalue();
    }
    for(int i=0; i<2; i++){
        arr[i].getvalue();
    }
    return 0;
}