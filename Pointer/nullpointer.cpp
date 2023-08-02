#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;//reserved address we can put NULL or \o->Null character
    cout<<&ptr;
}
/*Note:
if we want to store the address of pointer to another pointer we should use the 
int **p=&ptr here ptr is pointer *ptr  */