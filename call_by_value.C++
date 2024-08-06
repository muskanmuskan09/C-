#include<iostream>
using namespace std;

int swap (int *,int *);

 int swap(int *x, int *y)
    {
int temp;
        temp=*x;
        *x=*y;
        *y=temp;
        cout<<"Values of x and y is "<<x<<" "<<y;
        return 0;

    }
int main(){
    int a,b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the vaue of b :";
    cin>>b;
    cout<<"Before swapping values of the a and b is :"<<a<<" "<<b;

    swap(a,b);
    cout<<"after swapping values of a and b is :"<<a<<" "<<b;
        
return 0;
}