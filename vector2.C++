#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line

for (auto a : oceans) {
    cout << a << endl;
  }

/*cout << oceans[0] << endl;
cout << oceans[1] << endl;
cout << oceans[2] << endl;
cout << oceans[3] << endl;
cout << oceans[4] << endl;



for (int i = 0; i < sizeof(oceans)/sizeof(oceans[0]); i++) {
  cout << oceans[i] << endl;
}
*/
  //add code above this line
  
  return 0;
  
}