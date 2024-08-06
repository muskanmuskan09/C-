#include<iostream>
using namespace std;
int isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
return num;
}
int main(){
    int a,b;
    cout<<"Enter the value of a,b:";
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}