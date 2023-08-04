#include<iostream>
using namespace std;
int AreaOfCircle(int r){
    float A=3.14*(r*r);
    cout<<A;
}
int main(){
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    AreaOfCircle(r);
    return 0;
}