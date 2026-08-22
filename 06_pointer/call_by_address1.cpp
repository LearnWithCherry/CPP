#include <iostream>
using namespace std;
void add( int *a,int *b){
    cout << "1: "<<*a << "\n";
    *a = *a = *b;
    cout << "2: "<<*a <<"\n";
}
int main() {
    int x = 10;
    int y = 78;
    cout << "3: "<<x << "\n";
    add(&x , &y);
    cout <<"4: "<<x << "\n";

    return 0;
}