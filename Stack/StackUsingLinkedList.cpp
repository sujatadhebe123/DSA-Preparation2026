#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
private:
    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

    // Push element into stack
    void push(int value)
    {
        Node* newnode = new Node(value);
        newnode->next = top;
        top = newnode;

        cout << value << " pushed into stack" << endl;
    }

    // Pop element from stack
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is underflow" << endl;
            return;
        }

        Node* temp = top;
        cout << temp->data << " is popped" << endl;

        top = top->next;
        delete temp;
    }

    // Display top element
    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is underflow" << endl;
            return;
        }

        Node* temp = top;
        cout << temp->data << " is peek element" << endl;
    }

    // Display stack
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is underflow" << endl;
            return;
        }

        Node* temp = top;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL";
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
    cout << endl;

    st.pop();
    st.peek();

    return 0;
}