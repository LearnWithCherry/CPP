#include <iostream>
using namespace std;

class laptop
{
public:
    string laptopname;
    string CPU;
    int RAM;
    string GPU;
    int storage;
};
void Show(laptop l)
{
    cout << "Laptop = "  <<l.laptopname<<"\n";
    cout << "CPU = " << l.CPU << "\n";
    cout << "RAM = " << l.RAM << "\n";
    cout << "GPU = " << l.GPU << "\n";
    cout << "storage = " << l.storage << "\n";
}
void details(laptop d){
    cout << "Laptop Brand name: ";
    cin  >> d.laptop;


}
int main()
{
    laptop spec;

    spec.laptopname = "Asus vivoBook 15";
    spec.CPU = "Ryzen 5";
    spec.RAM = 16;
    spec.GPU = "RTX 3050";
    spec.storage = 512;
    Show(spec);



    return 0;
}