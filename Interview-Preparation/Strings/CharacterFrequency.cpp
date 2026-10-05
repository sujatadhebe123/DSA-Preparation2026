#include <iostream>
using namespace std;

int main()
{
    string str = "apple";

    for(int i = 0; i < str.length(); i++)
    {
        bool visited = true;

        for(int k = 0; k < i; k++)
        {
            if(str[i] == str[k])
            {
                visited = false;
                break;
            }
        }

        if(!visited)
        {
            continue;
        }

        int count = 0;

        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        cout << str[i] << " -> " << count << endl;
    }

    return 0;
}