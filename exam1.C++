//  passing default arguments

#include<iostream>
using namespace std;

void temp(int l,int b,int h=1){
    int a=l*b*h;
    cout<<a;
}
int  main(){
    temp(5,5);
return 0;
}
