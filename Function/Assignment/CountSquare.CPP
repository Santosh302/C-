#include<iostream>
using namespace std;
//Solution by sir.......
/* int square(int n){
    return n*n;
}
int countNumberOfDigits(int num){
    int ans=0;
    while(num>0){
        ans++;
        num/=10;
}
return ans;
}

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int numberOfDigits=countNumberOfDigits(num);
    cout<<square(numberOfDigits)<<endl;
    return 0;
} */
//Solution by me
int countNumber(int n){
int count=1;
for(int i=0; i<=n;i++){
    count++;
    n=n/10;
}
 cout<<count*count;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    countNumber(n);
   return 0;
}