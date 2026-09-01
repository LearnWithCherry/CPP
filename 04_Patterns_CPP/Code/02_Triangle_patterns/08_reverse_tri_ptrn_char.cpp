#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i < n; i++){
        char ch = 'A' + i;  // starting character for the row

        for(int j = 0; j <= i; j++){
            cout << ch-- << "  ";
        }
        cout << "\n";
    }

    return 0;
}




// output =    A  
//             B  A
//             C  B  A
//             D  C  B  A
//             E  D  C  B  A