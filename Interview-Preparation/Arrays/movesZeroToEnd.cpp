
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n];

    cout << "Enter elements for array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after moving zeroes:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
