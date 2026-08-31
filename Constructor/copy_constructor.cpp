#include <iostream>
using namespace std;
class Std{
   public:
      string name;
      int age;
      Std(string name, int age){
         this -> name = name;
         this -> age = age;
         this -> ptr = &this -> age;
      }
      Std(){cout << "Default Constructor Called..!!";}
      Std(std &obj){
         this -> name = obj.name;
         this -> age = obj.age;
         this -> ptr  =&this -> age;
      }
}
int main() {
   Std t1("Rajat"),t2("Bhardwaj",);
   Std t3 = t1;
   cout << t3.name  << "  " << t3.age << endl;
   return 0;
}