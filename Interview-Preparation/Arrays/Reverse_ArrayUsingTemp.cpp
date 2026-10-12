#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter range for array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element for array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp,i=0,j=n-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reversed array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}