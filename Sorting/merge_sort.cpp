#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int i=l,j=m+1,k=0,temp[100];
    while(i<=m && j<=r)
    {
    if(arr[i]<arr[j])
    {
temp[k++]=arr[i++];

    }
    else{
        temp[k++]=arr[j++];
    }
}
    while(i<=m)
    {
        temp[k++]=arr[i++];
    }
    while(j<=r)
    {
        temp[k++]=arr[j++];
    }
    for(int i=0;i<k;i++)
    {
        arr[l+i]=temp[i];
    }
    
}
void mergesort(int arr[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
}
int main()
{
    int arr[]={12,31,35,8,17,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}