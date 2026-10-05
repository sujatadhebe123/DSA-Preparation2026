#include <iostream>
using namespace std;

int main()
{
    int arr[] = {89, 7, 5, 4, 45, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"Reverse array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}