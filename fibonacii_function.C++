#include<iostream>
using namespace std;

void temp(int num){
    int t1=0;
    int t2=1;
    int next;

    for(int i=0;i<=num;i++){
cout<<t1<<"\n";
next=t1+t2;
t1=t2;
t2=next;
    }
}
int main(){
    int a;
   
    cout<<"Enter the number: ";
    cin>>a;
temp(a);

    
}