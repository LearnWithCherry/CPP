#include <iostream>
using namespace std;
class test{
    public: 
    int age;
    string name;
        test (){
            cout << "OS ka test nahi aate bhai...!!" << endl;
            name = "Rajat bhardwaj..";
            age = 19;
            this->age;
            this->name;
        }
};
int main() {
    test t1;
    cout << t1.name << " " << t1.age << endl;
    return 0;
}
