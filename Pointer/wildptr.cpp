#include <iostream>
using namespace std;

int * fun(){
    int a = 10;
    return 0;
}
int main() {
    int * ptr;
    cout << *ptr << " " << *ptr << "\n";
    return 0;
}