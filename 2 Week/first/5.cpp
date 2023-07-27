#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<<"Enter the first side of triangle";
    cin>>side1;
    cout<<"Enter the second side of triangle";
    cin>>side2;
    cout<<"Enter the Third side of triangle";
    cin>>side3;
    if(side1==side2 && side2==side3){
        cout<<"This is Eqilateral Triangle";
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        cout<<"This is an Isosceles Triangle";
    }
    else{
        cout<<"This is Scalene Triangle";
    }
    return 0;
}
