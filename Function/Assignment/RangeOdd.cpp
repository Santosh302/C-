#include<iostream>
using namespace std;
int OddPrint(int a,int b){
    for(int i=a; i<=b;i++){
        if(i%2!=0){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    OddPrint(a,b);
    return 0;
}