#include<iostream>
using namespace std;

int binary(int arr[],int n,int key){
    for(int i=0;i<n;i++){
if(arr[i]==key){
return i;
}
}
return -1;
}

int main(){
    int n;
    int key;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array :";
    for(int i=0; i<n;i++){
     cin>>arr[i];
     }
cout<<"Enter the key ";
cin>>key;
cout<<binary(arr,n,key)<<endl;
return 0;
}