#include<iostream>
using namespace std;
class calc{
    public:
    int a;
    int b;
    int add(){return a +b;}
    int sub(){return a -b;}
    int mul(){return a *b;}
    int div(){return a /b;}

};

// int calc::add(){return a+b;}
// int calc::sub(){return a-b;}
// int calc::mul(){return a*b;}
// int calc::div(){return a/b;}

int main(){
    calc c1,y1;
    c1.a = 10;
    c1.b = 10;

    cout << "Addition: "<<c1.add()<< "\n"; 
    cout << "Subtraction: "<<c1.sub()<< "\n"; 
    cout << "multiplication: "<<c1.mul()<< "\n"; 
    cout << "Division: "<< c1.div()<< "\n"; 

}
