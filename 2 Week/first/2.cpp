#include<iostream>
using namespace std;
int main(){
    float a, area,perimeter;
    cout<<"Enter the area of the Number";
    cin>>a;
    area=3.14*a*a;
    perimeter=2*3.14*a;
    if(area>perimeter){
        cout<<"Area is greater number";
    }
    else{
        cout<<"Perimeter is greter number";
    }
}