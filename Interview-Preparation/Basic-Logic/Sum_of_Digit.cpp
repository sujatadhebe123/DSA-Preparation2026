#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,r;
    cout<<"Enter number:"<<endl;
    cin>>num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<<"Sum of Digit is:"<<sum<<endl;
    return 0;
}