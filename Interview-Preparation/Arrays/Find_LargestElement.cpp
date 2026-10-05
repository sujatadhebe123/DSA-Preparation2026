 #include<iostream>
 using namespace std;
 int main()
 {
    int arr[]={89,78,6,4,3,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxElement=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxElement)
        {
            maxElement=arr[i];
        }
    }
    cout<<"Largest Element from array is:"<<maxElement<<endl;
    return 0;
    
 }