#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the length in centimetre :";
    cin>>a;
    float b=a/100.0;
    float c=a/100000.0;
    cout<<"Length in meter = "<<b<<"m"<<endl;
    cout<<"Length in Kilometer = " <<c<<"km"<<endl;
    return 0;
}