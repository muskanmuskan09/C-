#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number : ";
    cin>>n;
   int  fact = 1.0 ;
for(int i=1;i<=n;++i){
    fact*=i;

}
cout<<fact;
return 0;
}