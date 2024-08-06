#include<iostream>
using namespace std;
int main(){
int a,b,c;
       cout<<"Enter three numbers : ";
        cin>>a>>b>>c;
        if(a>b&&a>c){
            if(b>c&&a>c){
                cout<<"the maximun number is : ";
                cout<<a<<endl;
                cout<<"the minimum number is : ";
                cout<<c<<endl;;
            }
            else{
                cout<<"the maximun number is : ";
            cout<<a<<endl;;
                cout<<"the minimum number is : ";
                cout<<b<<endl;;
            }
        }
        else if(b>a&&b>c){
            if(b>c&&a>c){
                cout<<"the maximun number is : ";
                cout<<b<<endl;;
                cout<<"the minimum number is : ";
                cout<<c<<endl;;
            }
            else{                
                cout<<"the maximun number is : ";
                cout<<b<<endl;
                cout<<"the minimum number is : ";
                cout<<a<<endl;
            }
        }
        else {
            if(c>b&&a>b){
                cout<<"the maximun number is : ";
                cout<<c<<endl;;
                cout<<"the minimum number is : ";
                cout<<b<<endl;
            }
            else{
                cout<<"the maximun number is : ";
                cout<<c<<endl;
                cout<<"the minimum number is : ";
                cout<<a<<endl;
            }
        }
return 0;

}