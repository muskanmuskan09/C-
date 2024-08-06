//program to print prime number upto 100

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the value of a : ";
cin>>a;
int num;
for(num=a;num<=100;num++){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(num==i){
        cout<<num<<endl;
    }
}
return 0;
}