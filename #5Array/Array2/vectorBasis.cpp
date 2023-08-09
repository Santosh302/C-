#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//you need not mention the size 
    //inserting/input do not use[]
    v.push_back(5);
    //cout<<v.size()<<endl;
    v.push_back(8);
    //cout<<v.size()<<endl;
    v.push_back(74);
    //cout<<v.size()<<endl;
    v.push_back(6);
    v.push_back(58);
    //cout<<v.size()<<endl; //if we use capitcity the print 1,2,4,4;
   v.pop_back();//when we use this we can not decrease the capacity......
    //if you want to update/acess
   /*  cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
     */
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"size is :"<<v.size()<<endl;
    cout<<"Capacity is :" <<v.capacity()<<endl;
}
