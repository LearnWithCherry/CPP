#include <iostream>
using namespace std;
class pal{
    public: 
        string w;
            pal(string word){
                this-> w = word;
            }
    void ispal(string w){
        int low = 0;
        int high = w.length()-1;
        while(low <= high){
            if(w[low] != w[high]){return false;}
        }
        low++;
        high--;
    }
};
int main() {

    return 0;
}