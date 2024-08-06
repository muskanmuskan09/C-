#include<iostream>
using namespace std;
class abc{
    public:
    void print(){
        cout<<"Good Morning";
    }
};
int main(){
    abc ob;
    ob.print();
    cout<<"The size of Obj is "<<sizeof(ob);
    return 0;
}