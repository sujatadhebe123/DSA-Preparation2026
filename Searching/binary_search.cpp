#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,6,7,9,45,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
    int key;
   cout<<"enter elemnt that you want to search"<<endl;
   cin>>key;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Elemnt found at index"<<mid<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high)
{
    cout<<"Element not found"<<endl;
}    
return 0;
}