#include<iostream>
using namespace std;
int main() {
    int a,b,c,big;
    cout<<"\nEnter 3 numbers:";
    cin>>a>> b>> c;
    big=(a>b)?(a>c)?a:c:(b>c)?b:c;
    cout<<"\nThe biggest number is: "<< big;
    return 0;
}
