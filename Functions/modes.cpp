#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // -------------------------------
    // 1. ios::out  (Write mode)
    // Creates file if not exists
    // If file exists -> old content is deleted
    // -------------------------------
    ofstream fout1("out.txt", ios::out);
    fout1 << "This will overwrite the file....\n";
    fout1.close();

    // -------------------------------
    // 2. ios::app  (Append mode)
    // Opens file at end and adds new content
    // Old content remains safe
    // -------------------------------
    ofstream fout2("out.txt", ios::app);
    fout2 << "This is appended at the end.....\n";
    fout2.close();

    // -------------------------------
    // 3. ios::in  (Read mode)
    // Opens file for reading only
    // If file not found -> fails
    // -------------------------------
    ifstream filein("out.txt", ios::in);
    string line;
    cout << "Reading file (ios::in):" << endl;
    while (getline(filein, line)) {
        cout << line << endl;
    }
    filein.close();

    // -------------------------------
    // 4. ios::ate (Open at end, but allows movement)
    // File pointer starts at end, but we can move it
    // -------------------------------
    fstream file1("out.txt", ios::in | ios::out | ios::ate);
    file1 << "Added using ios::ate\n"; // writes at end
    file1.seekp(0); // move pointer to start
    file1 << "START: "; // modifies beginning
    file1.close();

    // -------------------------------
    // 5. ios::trunc (Truncate)
    // Deletes old content and writes new one
    // -------------------------------
    ofstream fout3("trunc.txt", ios::out | ios::trunc);
    fout3 << "Old content deleted, new content written.\n";
    fout3.close();

    // -------------------------------
    // 6. ios::binary (Binary mode)
    // Used for non-text files (images, videos, etc.)
    // We will write and then read simple binary data
    // -------------------------------
    // ofstream fout4("binfile.bin", ios::out | ios::binary);
    // char data[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    // fout4.write(data, sizeof(data));
    // fout4.close();

    // ifstream filein2("binfile.bin", ios::in | ios::binary);
    // char buffer[6];
    // filein2.read(buffer, sizeof(buffer));
    // cout << "\nBinary file content: " << buffer << endl;
    // filein2.close();

    return 0;
}
