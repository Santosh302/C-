#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3,slope1,slope2;
    cout<<"Enter the x1, y1 number"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the x2, y2 number"<<endl;
    cin>>x2>>y2;
    cout<<"Enter the x3 ,y3 number"<<endl;
    cin>>x3>>y3;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout<<"Point on straight Line";
    }
    else
    cout<<"Point are not on straight Line";
}