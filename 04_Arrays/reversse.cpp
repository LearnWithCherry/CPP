#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter size: ";
    cin  >> x;  
    int arr[x];
    cout << "Enter " << x <<" Elements: ";
    for (int i=0;i<x;i++){
        cin  >> arr[i];
    }
    for(int i=(x-1);i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}