#include<iostream>
using namespace std;
union money{
    int rice;
    char favchar;
    float salary;
};
int main(){
    union money m1;
    //m1.rice=40;
    m1.favchar='a';
 //  cout<<m1.rice;
    cout<<m1.favchar;
    return 0;
}







