//the first number you had enteredis greater than among of three

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers : \n";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<"the first number you had entered is greater than among of three numbers : ";
            cout<<num1;
        
        }
        else
         cout<<"the last number you had entered is greater than among of three numbers : ";
         cout<<num3;
        
    }
    else if(num2>num1){
        if(num2>num3){
        cout<<"the second number you had entered is greater than among of three numbers : ";
        cout<<num2;
    
        }
        else
     cout<<"the last number you had entered is greater than among of three numbers : ";
     cout<<num3;
    
    }
    else {
     cout<<"the last number you had entered is greater than among of three numbers : ";
cout<<num3;
    }
return 0;

}
