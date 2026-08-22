#include<iostream>
using namespace std;

int main(){
    int x = 20 * 5 - 10;
    x += 5;
    cout << "Adding: " << x << "\n";
    x -= 10;
    cout << "Subtracting: " << x << "\n";
    x *= 2;
    cout << "Multiplying: "<< x << "\n";
    x /= 181;
    cout << "Dividing: "<< x << "\n";
    x %= 100;
    cout << "Modulas: "<< x << "\n";
    return 0;
}