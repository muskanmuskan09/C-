#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter any number : ";
    cin>>a;
    
       
            
                 if(a>=0){
                    for(int i=0;i<=a;i++){
            int sum=0;
        
            cout<<"Enter another number for addition: ";
            cin>>b;
            sum=a+b;
            cout<<"sum is: "<<sum;
        break;
        }
       
            }
             else{
             cout<<"You entered a -ve integer : ";
        }
           

    
    return 0;

    }
    
    