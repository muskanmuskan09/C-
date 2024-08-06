#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line

vector<int> grades(0);
grades.push_back(72);
grades.push_back(84);
grades.push_back(63);
grades.push_back(55);
grades.push_back(98);

int min = grades.at(0); //set min to the first element in the array

for (auto a : grades) { //enhanced for loop
  if (a < min) { //if element is less than min
    min = a; //set min to element that is less
  }
}
//elements are not modified so enhanced for loop can be used

cout << "The lowest grade is " << min << endl; //print lowest element

  //add code above this line
  
  return 0;
  
}