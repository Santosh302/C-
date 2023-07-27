#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter the Year";
cin>>year;
if(year%400==0){
    cout<<"year is leap year";
}
else if(year%100==0){
    cout<<year<<"year is not leap year";
}
else if(year%4==0) {
    cout<<year<<"year is  a leap year";
}
else
cout<<year<<"Year is not a leap year";

}