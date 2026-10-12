#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter numbers a and b:"<<endl;
    cin>>a>>b;
    cout<<"Numbers before swapping:"<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Numbers After swapping:"<<a<<" "<<b<<endl;
    return 0;
    
}