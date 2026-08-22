#include<iostream>
using namespace std;

void greet(string name = "Student", int age = 19, string Address = "Himachal Pradesh"){
    cout << "Hello " << name << "\nGood morning !" << '\n';
    cout << name << " age is " << age <<'\n';
    cout << name << " is from " << Address << "\n";
};

int main(){
    greet("Rajat Bhardwaj");
    return 0;}