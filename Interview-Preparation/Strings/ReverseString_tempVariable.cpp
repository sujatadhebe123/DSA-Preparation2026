#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string temp=" ";

    for(int i = str.length()-1;i>=0;i--)
    {
        temp=temp+str[i];
    }
   cout<<"reverse string is"<<" "<<temp<<endl;

    return 0;
}