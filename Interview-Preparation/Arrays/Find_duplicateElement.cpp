#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter range for array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element from array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicate is:"<<arr[i]<<endl;
            }
        }
    }
    return 0;
}