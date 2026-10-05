#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }

    cout << "Reversed string is: " << str;

    return 0;
}