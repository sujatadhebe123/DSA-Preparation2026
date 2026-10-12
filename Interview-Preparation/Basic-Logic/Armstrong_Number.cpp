
#include<iostream>
using namespace std;

int main()
{
    int num, x, a, b, c, d;

    cout << "Enter number:" << endl;
    cin >> num;

    x = num;

    a = x % 10;
    x = x / 10;

    b = x % 10;
    x = x / 10;

    c = x % 10;

    d = (a*a*a) + (b*b*b) + (c*c*c);

    if(num == d)
    {
        cout << "Number is Armstrong" << endl;
    }
    else
    {
        cout << "Number is Not Armstrong" << endl;
    }

    return 0;
}
