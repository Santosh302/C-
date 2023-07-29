#include<iostream>
using namespace std;
int main()
{
    //Operator....
    //Arithmetic Operator
    int x=5;
    int y=2;
    cout<<x+y<<"\n";
    cout<<x-y<<"\n";
    cout<<x*y<<"\n";
    cout<<x/y<<"\n";
   int a=2;
   int b=4;
   int Rem=a%b;
   cout<<Rem<<"\n";
   //increment and decrement operator
   x++;
   cout<<x<<"\n";
   x--;
   cout<<x<<"\n";
   ++x;
   cout<<x<<"\n";
   --x;
   cout<<x;
  //float data type
  float x90=3.1;
  cout<<x90;
  //Calculating percentage of 5 Subjects
  float x1=90;
  float x2=91;
  float x3=92;
  float x4=93;
  float x5=100;
  float percent=(x1+x2+x3+x4+x5)/5;
  cout<<percent<<"\n";

//Calcuating Area of Circle
float radius=5;
float pi=3.1415;
float area=pi*radius*radius;
  cout<<area<<"\n";

//Boolean data type
bool w=true;
cout<<w<<endl;

//Calculating Simple Interest
float p,r,t,si;
p=100;
r=10;
t=2;
si=(p*r*t)/100;
cout<<si;
