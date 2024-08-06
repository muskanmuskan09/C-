#include<iostream>
using namespace std;
 int main(){
    int num,*ptr;
    cout<<"Enter the number : ";
    cin>>num;
    ptr=&num;
    cout<<"Before incrementing address is "<<ptr<<endl;
    ptr++;
    cout<<"After incrementing address is "<<ptr<<endl;
    return 0;
 }