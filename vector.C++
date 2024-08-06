#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line
vector<int> scores(0);
scores.push_back(68);
scores.push_back(92);
scores.push_back(100);
scores.push_back(88);
    
string feedback = "";

for (auto a : scores) {
  if (a == 100) {
    feedback = "You got a perfect score!";
    break;
  }
  else {
    feedback = "Keep up the hard work!";
  }
}
    
cout << feedback << endl;


  //add code above this line
  
  return 0;
  
}