
#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, r;

    cout << "Enter number:" << endl;
    cin >> num;

    if(num < 0)
    {
        cout << "Number is not palindrome" << endl;
        return 0;
    }

    int org = num;

    while(num != 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }

    if(org == sum)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }

    return 0;
}
