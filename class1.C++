#include<iostream>
using namespace std;
class student{
    public:
   string name;
   int rollno;
   int marks[5];
   public:
   void input();
   void output();
   void total();
};
 void student::input(){
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the roll number :";
    cin>>rollno;
    cout<<"Enter the all subjects numbers : ";
    for(int i=0;i<5;i++){
    cin>>marks[i];
    }
 }

void student::output(){
    cout<<"The student name is : ";
    cout<<name;
    cout<<"The roll number :";
    cout<<rollno;
    cout<<"All subjects numbers are as following : ";
    for(int i=0;i<5;i++){
    cout<<marks[i]<<"\n";
    }
 }
void student::total(){
    float sum=0;
    for(int i=0;i<5;i++){
        sum=sum+marks[i];
    }
    cout<<"The total marks is : ";
    cout<<sum;
    float temp=0;
    temp=(sum/500)*100;
   // cout<<"\n"<<temp;
    if(temp>=96 && temp<=100){
        cout<<"Computer science";
    }
    else if(temp>=91 && temp<=95){
        cout<<"Electronics";
    }
    else if(temp>=81 && temp<=90){
        cout<<"Mechanical";
    }
    else if(temp>=70 && temp<=80){
        cout<<"Electrical";
    }
    else{
        cout<<"Civil";
    }
}
int main(){
    student s;
    s.input();
    s.output();
    s.total();

    return 0;
}
