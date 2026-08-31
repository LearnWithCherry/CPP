#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt", ios::app); 
    fout << "\nThis line is appended at the end.";
    fout.close();
    return 0;
}
