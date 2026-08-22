// find how many number can be divied by 15 and 

#include<iostream>
using namespace std;

int main (){

    int n ,m ,d;
    cout << "---INPUT---"<<"\n";
    cout << "Enter Lower limit: ";
    cin >> n;
    cout << "Enter Upper limit: ";
    cin  >> m;
    cout << "Enter divisor: ";
    cin >> d;
    cout << "---OUTPUT---"<<"\n";
    int count = 0;
    while(n <= m){
        if (n % d == 0){
            cout << n << " ";
            count += 1;
        }
        n++;
    }
    cout << "\nTotal number " << count;
    return 0;
}