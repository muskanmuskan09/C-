#include<iostream>
using namespace std;
void print(int,int,int &,int &);
int main(){
    int x,y,area,peri;
    cout<<"Enter x";
    cin>>x;
    cout<<"Enter y";
    cin>>y;
    print(x,y,area,peri);
    cout<<"ar  "<<area;
    cout<<" pr   "<<peri;
   
    return 0;
}
 void print(int a,int b, int &ar, int &pr){
        ar=a*b;
        pr=2+(a*b);
    }
