#include<iostream>
#include<stack>
#include<string>
using namespace std;


int precedence(char op)
{
    if(op=='^'){
     return 3;
    }
    else if(op=='*'||op=='/'||op=='%')
    {
        return 2;
    } 
    else if(op=='+'||op=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
}
string infixToPostfix(string infix){
    stack<char>st;
    string postfix="";
    for(char ch:infix)
    {
        if(isalnum(ch))
        {
            postfix+=ch;
        }else if(ch=='(')
        {
            st.push(ch);
        }
        else if(ch==')')
        {
            while(!st.empty()&&st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        }
        //operators
        else{
            while(!st.empty()&& st.top()!='(' && precedence(st.top()
            
                >=precedence(ch)))
                {
                    postfix+=st.top();
                    st.pop();
                }
                st.push(ch);   
        }
    }
    //remaining operator

    while(!st.empty())
    {
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}
int main()
{
    string infix;
    cout<<"Enter the Expression:";
    cin>>infix;
    cout<<"Postfix expression: "<<infixToPostfix(infix);
    return 0;
}