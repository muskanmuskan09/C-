#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Hey!";
cin>>n;  
int arr[n];
cout<<"Enter the elements of array : ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int max= INT_MIN;
int min= INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"The maximun number is  : "<<max<<endl;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
    cout<<"Tne minimun number is : "<<min<<endl;
return 0;
}
