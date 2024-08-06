#include<iostream>
using namespace std;
  class cname{
    private:
    int a;
    public:
    void get()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void put(){
        cout<<a;
    }
  };
  int main()
  {
    cname ob;
    ob.get();
    ob.put();
    return 0;
  }