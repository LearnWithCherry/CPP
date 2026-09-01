#include<iostream>
using namespace std;

int main(){
    int n = 4; // 4 means this will print 4 lines not upto 4 digits
    int num = 1;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout << num <<" ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}


// output =    1 
//             2 3
//             4 5 6
//             7 8 9 10