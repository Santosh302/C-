#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl;
    //arry address always become the addresss of first element.
    cout<<arr<<endl;//it also print the address of array;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    }