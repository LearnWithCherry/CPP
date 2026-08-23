#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1,2,9},{4,5,5}}; 
    cout << "print Array element: "<<arr[0][1] << "\n";
    cout << "Before replacing: "<<arr[0][2] << "\n";
    arr[0][2] = 3;
    arr[1][2]++; // if you want to increment in an array..
    cout <<"After replacing: " <<arr[0][2] << "\n";
    cout << "traverse: " << "\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout <<arr[i][j] << " ";
        }
        cout << endl;    
    }
    return 0;
}