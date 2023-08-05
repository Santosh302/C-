#include<iostream>
using namespace std;
int productPointer(int *x,int  *y)
{
 int p=(*x)*(*y);
 cout<<p;
}
int main(){
     int x,y;
    cout<<"Enter the first number";
    cin>>x;
    cout<<"Enter the second number";
    cin>>y;
    productPointer(&x,&y);
}