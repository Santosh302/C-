#include<iostream>
using namespace std;
int  main(){
    int arr[]={4,2,6,5,8};
    int* ptr = arr;//we can also use *ptr=&arr[0]
    //cout<<ptr<<endl;
    /*  ptr[0]=8;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    *ptr=8;//ptr[0]=8
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
 */
 for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//ptr is pointing to 1st element
} 