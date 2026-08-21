#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[]={3,5,22,18,3};
    int n=5;
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    cout<<"Maximum is:"<<max<<endl;

    int secmax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max && arr[i]>secmax)
        {
            secmax=arr[i];
        }

    }
    cout<<"Second Maximum is:"<<secmax<<endl;
    

    return 0;
}