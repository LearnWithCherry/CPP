#include<iostream>
using namespace std;

int main(){ 
    int n = 5;
    char ch = 'A';

    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++){
            cout << " ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout << ch ; 
        }
        cout  << "\n";
        ch++;
    }
    return 0;
     


}