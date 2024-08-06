//program to print prime numbers between  a and b
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for ( i=2;i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;

        }
        
    }
    return 0;

}