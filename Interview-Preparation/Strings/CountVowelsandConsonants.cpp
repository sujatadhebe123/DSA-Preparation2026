#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter your string:" << endl;
    getline(cin, str);

    int vowel = 0;
    int consonant = 0;

    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    cout << "Total vowels: " << vowel << endl;
    cout << "Total consonants: " << consonant << endl;

    return 0;
}