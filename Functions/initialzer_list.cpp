#include <iostream>
using namespace std;
class STD{
    public:
        string name;
        int age;
        STD(string name, int age = 20){
            this->name = name;
            this->age = age;
        }
};
int main(){
    STD S1("Rajat"),S2("Bhardwaj",19);
    STD S3 = S1;
    cout << S3.name << " " << S3.age << endl;
    return 0;
}