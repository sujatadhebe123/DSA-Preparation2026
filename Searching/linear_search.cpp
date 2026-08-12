#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,7,8,5,4,9,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter element that you want to search"<<endl;
    cin>>x;
    int flag=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element found at index=:"<<i<<" "<<"position:"<<i+1<<endl;
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            cout<<"element not found"<<endl;
        }
        return 0;
    
}