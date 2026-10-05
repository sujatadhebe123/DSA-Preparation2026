 #include<iostream>
 #include <climits>
 using namespace std;
 int main()
 {
    int arr[]={89,78,6,4,3,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxElement=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxElement)
        {
            maxElement=arr[i];
        }
        

    }
    int secondMax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=maxElement&& arr[i]>secondMax)
        {
            secondMax=arr[i];
        }
        

    }
    cout<<"Second Largest Element from array is:"<<secondMax<<endl;
    
    return 0;
    
 }