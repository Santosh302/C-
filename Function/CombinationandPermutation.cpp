/* n Cr = n! /{r! × (n – r)!} */
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
}
int permutation(int n, int r){
    int npr=fact(n)/fact(n-r);
   
}
int main(){
 /*  int n ,r;
  cout<<"enter n:";
  cin>>n;
  cout<<"enter r:";
  cin>>r;
  int nfact=1;
  for(int i=2; i<=n;i++){
    nfact *= i;
  }
  int rfact=1;
  for(int i=2;i<=r;i++){
    rfact *=i;
  }
  int nrfact=1; //nrfact(n-r)!
  for(int i=2;i<=n-r;i++){
    nrfact *=i;
  }
  int ncr=nfact/(rfact*nrfact);
  cout<<ncr; */
  int n;
  cout<<"enter n:";
  cin>>n;
  int r;
  cout<<"enter r:";
  cin>>r;
  int nfact=fact(n);
  int rfact=fact(r);
  int nrfact=fact(n-r);
  //int ncr=nfact/(rfact*nrfact);
  int ncr=combination(n,r);
  cout<<ncr<<endl;
  int npr=permutation(n ,r);
  cout<<npr;

}