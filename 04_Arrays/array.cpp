#include<iostream>
using namespace std;

int main(){
    int x;
    int arr[ ] = {1,2,3,4,5,6,7,8,9};
    //index =    (0,1,2,3,4,5,6,7,8)
//------------------------------------------------
    // int arr[0] is for first elements & 
    // cout << arr2; //  = address - 0x61fed8
//------------------------------------------------
    cout << arr[2];// Befour
    arr[2] = 4; // change the memory elements  
    cout << arr[8]; // print arr - After 
//------------------------------------------------
    cout << "Enter : ";
    cin >> arr[1];
    cout << arr[1];

    return 0;
}