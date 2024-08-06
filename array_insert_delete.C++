#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements of Array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of Array are :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}