
#include<iostream>
using namespace std;
class student{
string name;
    public:
    int age;
    int roll_no;

public:
    void get();
    void put(string s){
        name=s;
    }
};

void student::get()
{

    cout<<"Name :";
    cout<<name<<endl;
    cout<<"age :";
    cout<<age<<endl;
    cout<<"Roll_no.";
   cout<<roll_no<<endl;
}


int main(){

student arr[2];

for(int i=0;i<2;i++){
    string s;
    cout<<"Enter The name :";
    cin>>s;
    arr[i].put(s);
    cout<<"Enter the age :";
    cin>>arr[i].age;
    cout<<"Enter the Roll_no.";
    cin>>arr[i].roll_no;
}

for(int i=0;i<2;i++){
    arr[i].get();
}


    return 0;
}