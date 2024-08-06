#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
cout<<"Enter the side 1 : ";   
cin>>side1;
cout<<"Enter the side 2 :";
cin>>side2;
cout<<" Enter the side 3 : ";
cin>>side3;
if(side1==side2&&side1==side3){
    cout<<"triangle is equilateral ";
    }
else if(side1==side2||side1==side3||side2==side3){
    cout<<"triangle is isosceles";
}
else{
    cout<<"tringle is scalene";
}
return 0;

}





