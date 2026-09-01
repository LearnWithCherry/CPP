//----------------------------------------------------------
//output =          *           *
//                  **         **
//                  ***       ***
//                  ****     ****
//                  *****   *****
//                  ****** ******
//                  *************
//                  ****** ******
//                  *****   *****
//                  ****     ****
//                  ***       ***
//                  **         **
//                  *           *
//-----------------------------------------------------------
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    // 🦋 Top half of the butterfly (including middle)
    for(int i = 0; i < (n+1)/2; i++) {
        // Left stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for(int j = 0; j < n - 2*(i+1); j++) {
            cout << " ";
        }

        // Right stars (same count as left)
        for(int j = 0; j <= i; j++) {
            // On middle row, avoid printing extra * to keep total stars = n
            if (i == (n/2) && j == i) continue;
            cout << "*";
        }

        cout << "\n"; // go to next row
    }

    // 🦋 Bottom half of the butterfly (mirror of top)
    for(int i = (n/2)-1; i >= 0; i--) {
        // Left stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for(int j = 0; j < n - 2*(i+1); j++) {
            cout << " ";
        }

        // Right stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << "\n"; // next row
    }

    return 0;
}
