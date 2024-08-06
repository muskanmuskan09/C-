#include<iostream>
using namespace std;
int main(){
    int i,n,m;
cout<<"Enter the value of n,m:";
cin>>n>>m;
int arr[n];
cout<<"Enter the elements of list";
for( i=0;i<m;i++){
    cin>>arr[i];
}
cout<<"Elements of list are : ";
for(i=0;i<m;i++){
    cout<<arr[i]<<endl;
}
return 0;
}
