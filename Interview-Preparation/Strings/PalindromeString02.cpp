#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter your string:" << endl;
    getline(cin, str);

    int i = 0;
    int j = str.length() - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            cout << "String is not palindrome" << endl;
            return 0;
        }

        i++;
        j--;
    }

    cout << "String is palindrome" << endl;

    return 0;
}