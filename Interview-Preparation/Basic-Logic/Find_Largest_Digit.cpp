
#include<iostream>
using namespace std;

int main()
{
    int num, r, largest = 0;

    cout << "Enter number:" << endl;
    cin >> num;

    if(num < 0)
    {
        num = -num;
    }

    while(num != 0)
    {
        r = num % 10;

        if(r > largest)
        {
            largest = r;
        }

        num = num / 10;
    }

    cout << "Largest Digit is: " << largest << endl;

    return 0;
}
