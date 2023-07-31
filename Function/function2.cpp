#include<iostream>
using namespace std;

int mini(int x,int y)//it is a anther space take in memory;
{
    int a;
    if(x<y)
    a=x;
    else a=y;
    return a;
}
int main()
{
int x,y;
cin>>x>>y;
cout<<mini(x,y);//it is another space in memory.we can also use min() and max() method;
}//squt(7)..it print the square of seven.#include<cmath> use in header.