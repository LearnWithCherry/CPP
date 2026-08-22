#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter size of array: ";
    cin >> x;

    int arr[x];

    cout << "Enter " << x << " elements ";
    for(int i=0;i<x;i++){
        cin >> arr[i];
    }
    for(int i=0;i<x;i++){
        cout << arr[i] << " ";
    
    }
    return 0;
}