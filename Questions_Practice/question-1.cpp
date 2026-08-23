// Hestogram

#include <iostream>
using namespace std;

void printHistrogram(int* ptr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<ptr[i]; j++){
            cout <<"X" ;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter number  b/w 1 - 20 of students: ";
    cin >> n;
    if( n < 1 || n > 20){
        cout << "Invalid...";}
    else{
        int arr[n];
        cout << "Enter data of students: ";        
        for(int i=0;i<n;i++){cin >> arr[i];}
        printHistrogram(arr, n);
    }
    return 0;
}