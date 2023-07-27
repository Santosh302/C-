#include<iostream>
using namespace std;
int main(){
    int x ,y;
    cout<<"Enter the first number";
    cin>>x;
    cout<<"Enter the second number";
    cin>>y;
    if(x==0 && y==0){
        cout<<"It's belong for Orgin";
    }
    else if(x==0 && y!=0)
    {
        cout<<"It's on Y-axis";
    }
    else if(x!=0 && y==0){
        cout<<"It's on X-axis";
    }
}