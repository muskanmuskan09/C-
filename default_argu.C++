#include<iostream>
using namespace std;
void sum(int num=5,int n=10);
int main(){
    sum();
    sum(3);
    sum(4,8);
return 0;
}
void sum (int num,int n){
    int total=0;
    for(int i=1;i<=n;i++){
total=total+num;
    }

cout<<"\n sum = "<<total;

}
