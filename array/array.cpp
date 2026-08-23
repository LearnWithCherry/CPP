#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // cout << arr << " " << &arr[0] << " " << &arr[1] << " " << " " << &arr[2] << " " << &arr[3] << " " << *arr << " " << arr[0];
    int *ptr = &arr[1];
    int *ptr1 = &arr[4];
    cout << ptr1 - ptr << "\n";
    cout << "\n";
    return 0;
}           