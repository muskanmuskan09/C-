#include<iostream>
using namespace std;
void fibb(int n){
    static int i, n1=0,n2=1,n3;
   for(i=0;i<n;i++){
     if(n>0){
        n=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3;
        fibb(n-1);   
    }
    }
}
int main(){
    int num,i,a=0,b=1;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Fibbonacci series in \n";
    cout<<a<<" "<<b;
  
  fibb(num-2);

    return 0;

}

