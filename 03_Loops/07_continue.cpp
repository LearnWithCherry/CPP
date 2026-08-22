#include <iostream>
using namespace std;

int main(){
//-- for loop

    for (int i = 0;i<=100;i++){
        if (i == 5){
            continue;
        }
        if(i == 10){
            break;
        }
    cout << i<< " ";
    }
cout << "--For loop\n";

//--while loop
    int a = -1;
    int b = 10;
    while(a<b){
        a++;
        if(a == 3){
            continue;
        }
        if(a == 8){
            break;

        }
        cout << a << " ";

    }
cout << "--While loop\n";
//--do while loop
    int c = 0;
    int d = 10;
    do{
        cout << c << " ";
        c++;
        if (c == 4){
            continue;
        }
        if(c == 9){
            break;
        }
    }
    while (c < d);
cout << "--do while loop\n";
    return 0;
}