#include<iostream>
using namespace std;
int main(){
/*   int a,b,temp;
  cin>>a>>b;
  temp=a;
  a=b;
  b=a;
  b=temp;
  cout<<a;
  cout<<b; */
  int a,b;
  cout<<"Enter first number";
  cin>>a;
  cout<<"Enter second number";
  cin>>b;
   a=a+b;
   b=a-b;
   a=a-b;
  cout<<a<<" "<<b;
}