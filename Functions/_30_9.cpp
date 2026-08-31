#include <iostream>
#include<fstream>
using namespace std;
// class Std{
//         public: 
//             char name[30];
//             int age;
// };

struct Std{
    char name[30];
    int age;
};
int main() {
    fstream file;
    file.open("Text.txt", ios::out | ios::in | ios::binary);
    Std obj1 = {"Student1", 20}, obj2;
    file.write(reinterpret_cast<char*>(&obj1),sizeof(Std));file.seekg(0, ios::beg);
    file.read(reinterpret_cast<char*>(&obj2),sizeof(Std));file.seekg(0, ios::beg);
    cout << 
    return 0;
}

// structure and file operation and classes opeartion, mamager function ( construction and destructor )