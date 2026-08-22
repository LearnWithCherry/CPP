#include<iostream>
using namespace std;

int main(){
    
    cout << "Hello User...." << "\n";
//-------------------INPUT---------------------------------------
    int a = 10.2;
    int b = 10.1;
    a = 15;
    b = 56;
    bool q = a != b;
    bool r = a == b;
    bool c = a < b ;
    int d = a > b ;
    int e = a == b ;
    int f = a <= b ;
    int g = a >= b ;
//-------------------OUTPUT--------------------------------------
    cout << "comparing A and B we get: "<< c << "\n";
    cout << "comparing A and B we get: "<< d << "\n";
    cout << "comparing A and B we get: "<< e << "\n";
    cout << "comparing A and B we get: "<< f << "\n";
    cout << "comparing A and B we get: "<< g << "\n";
    cout << "comparing A and B we get: "<< q << "\n";
    cout << "comparing A and B we get: "<< r << "\n";

    return 0;
}
