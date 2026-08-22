#include<iostream>
using namespace std;

int  main(){
    int x = 100;
    x++; // 20 + 1 post increment 
    cout << "Increment X we got: " << x << "\n";
    x--; // 20 - 1 post increment
    cout << "Decrement X we got: " << x << "\n";
    ++x; // 1 + 20 pre increment
    cout << "Increment X we got: " << x << "\n";
    --x; // 1 - 20 pre increment 
    cout << "Decrement X we got: " << x << "\n";


//-----------------------------------------------------
    int z = 1;
    cout << "Befour increment " << z++ << "\n"; // output is 1
    cout << "Increment " <<z << "\n"; // output is 2
    // Show output when call
//-----------------------------------------------------
    int c = 1;
    cout << "Befour decrement " << c-- << "\n";// output is 1
    cout << "Decrement " <<c << "\n";// output is 0
    // Show output when call
//-----------------------------------------------------
    int v = 1;
    cout << "Befour decrement " << --v << "\n";// output is 0
    cout << "Decrement " <<v << "\n";// output is 0
    // show output first
//-----------------------------------------------------
    int b = 1;
    cout << "Befour increment " << ++b << "\n";// output is 2
    cout << "Increment " <<b << "\n";// output is 2
    // show output first

    return 0;
}