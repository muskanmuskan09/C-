#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter any Number :";
    cin>>a;
    cout<<"Enter the elements of array :";
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Key elements :";
    cin>>key;
      int pos=1;
for(int i=0;i<a;i++){
    if(key==arr[i]){
        cout<<"The key is present in "<<i+1<<" position\n";
        pos=0;
    }
}
if(pos==1){
    cout<<"Key is not present in the array!";
}
return 0;

}