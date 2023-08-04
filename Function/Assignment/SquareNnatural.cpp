#include<iostream>
using namespace std;
//Solution by me.......
 /* int squar(int n){
     int sqa=0;
    for(int i=0; i<=n; i++){
    sqa=i*i;
   cout<<sqa;
    }
    cout<<endl;
 }
 int main(){
    int n;
    cout<<"Enter first natural number";
    cin>>n;
    squar(n);

 } */
 //soulution by sir......
 int square(int num){
    return num*num;
 }
 void firstNSquares(int n){
    for(int i=1;i<=n;++i){
        cout<<i<<" "<<square(i)<<endl;
    }
 }
 int main(){
    int n;
    cin>>n;
    firstNSquares(n);
    return 0;
 }