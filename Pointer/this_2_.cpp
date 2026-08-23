#include <iostream>
using namespace std;
class test{
    public: 
        int x;
        int y;
            test setvalue(int x, int y){
                this->x = x;
                this->y = y;
                return *this;}
        int print(){
            cout << x << " ";}};
int main() {
    test t;
    t.setvalue(10,20);
    return 0;
}