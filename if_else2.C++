#include<iostream>
using namespace std;
int main(){
int saving;
cout<<"Enter the amount : ";
cin>>saving;
if(saving>5000){
    if(saving>10000){
        cout<<"party";
}
else
cout<<"dinner";
}
else if(saving>4000){
    if(saving>=4500){
        cout<<"shopping";
}
else
cout<<"Movie";
}
else if(saving>2000){
    if(saving>2500){
        cout<<"market";
    }
    else
    cout<<"grocery shop";
}
   else
    cout<<"not going anywhere";
    return 0;

}