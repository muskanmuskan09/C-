// Program based on the vector using functions push,pop,at function


#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans;
  
  //add code below this line
  oceans.push_back("Pacific");
  oceans.push_back("Atanlic");
  oceans.push_back("Indian");
 oceans.push_back("Arctic");
 oceans.push_back("Sourthen");
 oceans.push_back("Place Holder");
 oceans.at(5)="Delete";
 oceans.pop_back(); 
  //add code below this line
 
 


  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}