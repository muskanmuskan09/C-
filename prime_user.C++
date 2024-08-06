//program to print prime numbers upto n
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    for(int num=0;num<=a;num++){
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