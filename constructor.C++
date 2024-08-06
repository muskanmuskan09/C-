#include<iostream>
using namespace std;
class test{
    int a;
    public:
    test(){
        cout<<"Enter a :";
        cin>>a;
        cout<<a<<"\n";
    }
test(int x){
    a=x;
    cout<<a;
}
test(test &obj){
    a=obj.a;
    cout<<a;
}
};
int main(){
    test ob,ob2(10);
    test ob3(ob);
    return 0;
}
