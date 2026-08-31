#include <iostream>
using namespace std;
class Par{
    public:
        int base;
        int height;
        Par( int base = 15, int height = 20){
            this->base=base;
            this->height=height;
        }
        int area(){
            return base * height;
        }
};
int main() {
    Par p;
    cin >> p.base >> p.height;
    cout << p.area() << "sq.units" << endl;
    return 0;
}