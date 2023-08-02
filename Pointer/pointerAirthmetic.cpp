#include<iostream>
using namespace std;
int main(){
   /*  int x=8;
    int *ptr=&x;
    cout<<*ptr<<endl;
    cout<<ptr<<endl; */
    int x=4;
    int *ptr=&x;
    //ptr=ptr+1;
    //cout<<ptr<<endl;(*ptr++ is valid)
    *ptr=*ptr+1;
    cout<<*ptr;//1610637823
}