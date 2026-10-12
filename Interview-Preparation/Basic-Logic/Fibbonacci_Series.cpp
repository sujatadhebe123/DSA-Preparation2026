#include<iostream>
using namespace std;
int main()
{
int x=-1,y=1,z,r;
cout<<"Enter range:"<<endl;
cin>>r;
for(int i=0;i<r;i++)
{
    z=x+y;
    cout<<z<<endl;
    x=y;
    y=z;
}
    return 0;
}