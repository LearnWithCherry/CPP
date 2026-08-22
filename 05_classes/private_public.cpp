#include<iostream>
using namespace std;

class clsA{
private:
    int x;
public:
    int y;
    void setX(int a){
        x = a;
    }
    void getX(){
        cout << "Value of X: "<< x << '\n';
        cout << "Value of Y: "<< y << '\n';
    }
};
int main(){
    clsA objA;
    objA.y = 25;
    objA.setX(40);
    objA.getX();
    return 0;
}