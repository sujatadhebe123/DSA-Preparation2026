#include<iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"Enter number:"<<endl;
    cin>>num;
    if(num<2)
    {
        flag=1;
    }
    else{
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is Not Prime"<<endl;
    }
    return 0;
}