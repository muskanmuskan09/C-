//program to print table of digit entered by user
#include<iostream>
using namespace std;
int main(){
    int i, n;
   int mul=0;
   cout<<"Enter a positive integer : ";
   cin>>n;
   for(i=1;i<=10;i++){
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   }
   return 0;
}