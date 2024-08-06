#include<iostream>
using namespace std;
int main(){
    char c;
    int islowercase,isuppercase;
    cout<<"Enter any alphabet : ";
    cin>>c;

    islowercase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isuppercase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

if(islowercase||isuppercase){
    cout<<c << " is a vowel";

}
else{
    cout<<c << " is a consonant";

}
return 0;

}