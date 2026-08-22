#include <iostream>
using namespace std;
class coffee {
private:
    string coffee_Brand;
    int quantily;
    string milktype;
    string sugar;
public:
    coffee(string c, int q, string m ,string s) {
        coffee_Brand = c;
        quantily = q;
        milktype = m;
        sugar = s;}
    void displayInfo() {
        cout << "coffee Brand name: " << coffee_Brand << "🍵"<<"\n";
        cout << "quantity: " << quantily << " 🥛 ML"<< "\n";
        cout << "milktype: " << milktype<<" 🐮" << "\n";
        cout <<"Type of Sugar you want: " << sugar<< " 🍫"<<"\n";}
}; 
int main() {
    coffee s1("Nescafe",300,"AlmondMilk","Stevia");
    s1.displayInfo();
    return 0;}
