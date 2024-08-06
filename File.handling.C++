#include<iostream>
#include<fstream>
using namespace std;
int main(){
   string st="hello";
    cout<<"Enter\n";

    ofstream myfile("abc.txt");
  myfile<<st;
}