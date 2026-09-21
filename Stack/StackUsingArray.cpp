#include <iostream>
using namespace std;

#define size 5

class Stack
{
private:
    int stack[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            stack[top] = value;
            cout << value << " is pushed" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << stack[top] << " is popped" << endl;
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << stack[top] << " is the peek element" << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements:" << endl;

            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();

    st.pop();
    st.peek();

    st.display();

    return 0;
}