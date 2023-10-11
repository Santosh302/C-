#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[]={5,8,9,4,23,56,84};
  int n=7;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
 /*  //bubble sort
  for(int i=0; i<n-1;i++){ //n-1 passes
  //traverse
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }      
    }
  } */
//bubble sort optimised
  for(int i=0; i<n-1;i++){ //n-1 passes
  //traverse
  bool flag= true;
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            flag= false;
        }      
    }
    if(flag==true){
        //swap didn't happen
        break;
    }
  }
  cout<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}