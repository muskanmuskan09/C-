#include<iostream>
using namespace std;
int main(){
    char ai;
    cout<<"Enter an alphabet  ";
    cin>>ai;
    switch(ai){
      case 'a':
       cout<<"You entered a vowel  ";
       break;
        case 'e':
       cout<<"You entered a vowel  ";
       break;
        case 'i':
       cout<<"You entered a vowel ";
       break;
        case 'o':
       cout<<"You entered a vowel ";
       break;
        case 'u':
       cout<<"You entered a vowel ";
       break;
       default :
       cout<<"you entered a consonant ";
       break;
    }
    return 0;
}