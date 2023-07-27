#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the first number";
cin>>a;
cout<<"Enter the second number";
cin>>b;
cout<<"Enter the third number";
cin>>c;
if(a<=b && a<=c)
{
    cout<<"A is atleast number";
}
else if(b<=a && b<=c)
{
    cout<<"B is atleast number";
}
else{
    cout<<"C is atleast number";
}

}

