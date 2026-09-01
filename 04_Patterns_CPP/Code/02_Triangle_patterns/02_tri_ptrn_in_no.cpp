#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 0;

    for(int i=1; i<n; i++){            // OUTER LOOP
        num++;                        // Increment num each row
        for(int j=1; j<=i; j++){     // INNER LOOP
            cout << num << " " ;    // Print the current num value multiple times
        } 
        cout  << "\n";
    }
    return 0;
}

// output =    1  
//             2  2
//             3  3  3
//             4  4  4  4
//             5  5  5  5  5