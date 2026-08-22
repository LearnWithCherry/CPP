#include <iostream>
using namespace std;
class math{
public:
  // Inline (defined inside class) by default...
  int square(int x){
    return x * x;
  }
   // Inline with keyword (defined outside class)
   inline int cube(int x);
  
};
int math::cube(int x){
  return x*x*x;

}
int main() {
  math m;
    cout << "Square of 5: " << m.square(5) << endl;
    cout << "Cube of 5: " << m.cube(5) << endl;
  return 0;
}
/*Use just definition if function comes before main().
  Use declaration + definition if function comes after main() 
  or in big projects with separate files.
*/