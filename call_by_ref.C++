#include<iostream>
using namespace std;
void date(int *x,int *y){
int *temp;
*temp=*x;
*x=*y;
*y=*temp;
cout<<"After the swapping the value of A nd B is : ";
cout<<*x<<" "<<*y;
}
int main(){
    int a,b;
    cout<<"Enter the value of A nd B : ";
cin>>a>>b;
date(&a,&b);
return 0;
}
