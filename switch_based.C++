#include <iostream>
using namespace std;
int main() {
int n1,n2;
char op;
cout<<"Enter 2 numbers: ";
cin>>n1>>n2;
cout<<"Enter operand: ";
cin>>op;
switch (op)
{
case '+':
cout<<"addition of two num : "<<n1+n2<<endl;
break;
case '-':
cout<<"subtraction of two num: "<<n1-n2<<endl;
break;
case '*':
cout<<"multiplication of two num : "<<n1*n2<<endl;
break;
case '/':
cout<<"division of two num : "<<n1/n2<<endl;
break;
case '%':
cout<<"modulus of two num : "<<n1%n2<<endl;
break;
default:
cout<<"Operator not found!"<<endl;
break;
}

return 0;
}
