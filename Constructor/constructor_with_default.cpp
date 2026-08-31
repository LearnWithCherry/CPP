#include <iostream>
using namespace std;
class STD{
    public: 
    int age;
    string name;
        STD (string){
            cout << "OS ka test nahi aate bhai...!!" << endl;
            name = "Rajat bhardwaj..";
            age = 19;
            this->age;
            this->name;
        }
};
int main() {
    STD S1("Rajat"),S2("CSE", 2025);
    cout << S1.name << " " << S1.age << endl;
    return 0;
}
