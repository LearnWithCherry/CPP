#include<iostream>
using namespace std;

int main(){
    int n = 5;
    char ch = 'A';
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout << ch <<" ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}

// output =    A 
//             B C
//             D E F
//             G H I J
//             K L M N O