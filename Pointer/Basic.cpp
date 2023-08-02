#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    cout<<*p<<endl;
    *p=8;
    cout<<*p<<endl;
    cout<<x;
}