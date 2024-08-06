#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;
    bool flag=0;
    for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"You had entered a non prime number ";
        flag=1;
        break;
    }
    }
    if(flag==0){
        cout<<"Prime ";

    }
    
    return 0;
}