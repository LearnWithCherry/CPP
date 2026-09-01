#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Top half
    for(int i = 0; i < n; i++) {
        // spaces before first star
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // spaces between stars
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    // Bottom half
    for(int i = n - 2; i >= 0; i--) {
        // spaces before first star
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // spaces between stars
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

// output =              *
//                      * *
//                     *   *
//                    *     *
//                   *       *
//                    *     *
//                     *   *
//                      * *
//                       *