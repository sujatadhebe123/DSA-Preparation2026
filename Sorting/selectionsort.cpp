#include<iostream>
using namespace std;
int main()
{
int arr[]={5,7,3,1,2,6};
int n=6;
for(int i=0;i<n-1;i++)
{
    int smallindex=i;//unsorted array ka start
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[smallindex]){
        smallindex=j;
        }
    }
    swap(arr[i],arr[smallindex]);
}


    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}