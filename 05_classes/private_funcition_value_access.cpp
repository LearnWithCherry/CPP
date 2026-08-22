#include<iostream>
using namespace std;

class CLSa{
    private:
        int X;
    public:
        int y;
        void setX(int a){X = a;}
        friend void fun(CLSa objA);
};

void fun(CLSa objA){
    cout << objA.X << "\n";
    CLSa objB;
    objB.X = 40;
    cout << objB.X << "\n";

}

int main(){
    CLSa objA;
    objA.setX(20);
    fun(objA);
    return 0;
}