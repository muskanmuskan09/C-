#include<iostream>

using namespace std;

template <typename T>
T add(T x, T y){
  return (x+y);
}
int main(){
cout<<"Addition of two number is : "<<add<int>(2,3)<<"\n";
cout<<"Addition of two number is : "<<add<float>(2.099,38.9)<<"\n";;
cout<<"Addition of two number is : "<<add<double>(2098.098,37869.098)<<"\n";;
return 0;
}
