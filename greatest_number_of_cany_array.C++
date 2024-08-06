// Array- kids with gretest number of candies
#include<iostream>
using namespace std;
string candy(string hello){
cout<<hello;
}
int candies(int num){
    cout<<num;
    return  num;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    string hello;
    for(int i=0;i<n;i++){
        cin>>hello;
    }
    int arr[n];
    cout<<"Enter the amount of candies kids have :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    candy(hello);
    candies(arr[i]);
}
 return 0;
}