#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter your string:" << endl;
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout <<str[i]<<endl;
        }
    }

    return 0;
}