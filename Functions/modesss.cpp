#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout1("data.txt", ios::out);
    fout1 << "This will overwrite the file.\n";
    fout1.close();

    ofstream fout2("data.txt", ios::app);
    fout2 << "This is appended at the end.\n";
    fout2.close();

    ifstream fin("data.txt", ios::in);
    string line;
    cout << "Reading file (ios::in):" << endl;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    fstream file1("data.txt", ios::in | ios::out | ios::ate);
    file1 << "Added using ios::ate\n";
    file1.seekp(0);
    file1 << "START: ";
    file1.close();

    ofstream fout3("data.txt", ios::out | ios::trunc);
    fout3 << "Old content deleted, new content written.\n";
    fout3.close();

    ofstream fout << ("data.txt", ios::out | ios::trunc);
    fout << 

    return 0;
}
