#include<iostream>
using namespace std;

int main(){

//     int day = 1;
//     switch(day){
//     case 1: cout << "Monday\n"; break;
//     case 2: cout << "Tuesday\n"; break;
//     case 3: cout << "Wednesday\n"; break;
//     case 4: cout << "thursday\n"; break;
//     case 5: cout << "friday\n"; break;
//     case 6: cout << "saturday\n"; break;
//     case 7: cout << "Sunday\n"; break;
//     default: cout << "Invalid day";
// }
    int a , b;
    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;
    int x = ((a - b) % 2);

    switch (x)
    {
    case 0: cout <<"Value is Even.."; break;
    case 1: cout << "Value is Odd.."; break;
    default: cout << "Error..";
    }

    return 0;
}