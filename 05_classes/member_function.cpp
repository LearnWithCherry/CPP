
#include<iostream>
using namespace std;

class Test{
    public:
    int age;
    static int count;
    static void fun(){
        cout << count << "\n";
    }
    static void update(){
        count++;
    }
};

int Test :: count = 100;
    
int main(){
    Test t1,t2;
    Test :: fun();
    Test :: update();
    t1.fun();
    
    
    t1.age = 15;
    t2.age = 20;
    // Test :: count = 50;
    t1.count = 75;
    cout  << "Age 1: " << t1.age << "\nAge 2: " << t2.age << "\n";
    cout  << "Count 1: " << t1.count << "\ncount 2: " << t2.count  << "\n";
}