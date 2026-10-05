#include <iostream>
using namespace std;

int main()
{
    int arr[] = {9,67,89,90,98};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i=0;
    bool sorted=true;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            sorted=false;
            break;
        }
    }
    if(sorted)
    {
        cout<<"Array is Sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}