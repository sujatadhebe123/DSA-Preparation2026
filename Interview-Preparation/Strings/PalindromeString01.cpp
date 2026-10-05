#include<iostream>
using namespace std;
int main()
{
string str;
cout<<"Enter your string:"<<endl;
getline(cin,str);
string org=str;
int i=0;
int j=str.length()-1;
while(i<j)
{
swap(str[i],str[j]);
i++;
j--;
}
if(org==str)
{
    cout<<"String is plaindrome"<<endl;
}
else{
    cout<<"String is not plaindrome"<<endl;
}
return 0;
}
