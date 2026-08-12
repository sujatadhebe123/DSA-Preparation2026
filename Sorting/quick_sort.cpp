#include<iostream>
using namespace std;
int parttion(int arr[],int st,int end)
{
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++)
    {
       if(arr[j]<pivot)
       {
        idx++;
        swap(arr[j],arr[idx]);
       }}
       idx++;
        swap(arr[end],arr[idx]);
        return idx;
       } 
    void printarray(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

void quicksort(int arr[],int st,int end)
{
    if(st<end)
    {
        int pivotidx=parttion(arr,st,end);
        quicksort(arr,st,pivotidx-1);
        quicksort(arr,pivotidx+1,end);
    }
}
int main()
{
int arr[]={5,6,2,1,4,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Original array"<<endl;
printarray(arr,n);
quicksort(arr,0,n-1);
cout<<"Sorted array"<<endl;
printarray(arr,n);


    return 0;
}