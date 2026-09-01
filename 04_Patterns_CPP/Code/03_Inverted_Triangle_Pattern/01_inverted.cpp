#include<iostream>
using namespace std;

int main(){ 
    int n = 5;
    int num = 1;

    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++){
            cout << " ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout << (i+1); 
        }
        cout  << "\n";
    }
    return 0;
}

// output =      11111
//                2222
//                 333
//                  44
//                   5