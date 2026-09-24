#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string exp = "23*54*+";

    stack<int> st;

    for (char ch : exp)
    {
        // If character is an operand
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            // Pop two operands
            int operand2 = st.top();
            st.pop();

            int operand1 = st.top();
            st.pop();

            int result;

            // Perform operation
            switch (ch)
            {
                case '+':
                    result = operand1 + operand2;
                    break;

                case '-':
                    result = operand1 - operand2;
                    break;

                case '*':
                    result = operand1 * operand2;
                    break;

                case '/':
                    result = operand1 / operand2;
                    break;

                case '%':
                    result = operand1 % operand2;
                    break;

                default:
                    break;
            }

            // Push result back into stack
            st.push(result);
        }
    }

    cout << "Result: " << st.top() << endl;

    return 0;
}