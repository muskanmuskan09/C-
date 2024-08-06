#include<iostream>
using namespace std;
int temp(int num){
    int fact=1.0;
    for(int i=1;i<=num;i++){
fact*=i;
    }
return fact;
}

int main(){
    int n;
    cout<<"Enter The value of n:";
    cin>>n;
int ans=temp(n);
cout<<ans<<endl;
return 0;
}