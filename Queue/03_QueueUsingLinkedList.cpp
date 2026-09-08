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

class Queue
{
private:
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // Insert element at rear
    void enqueue(int value)
    {
        Node* newnode = new Node(value);

        // If queue is empty
        if (front == NULL)
        {
            front = newnode;
            rear = newnode;
            return;
        }

        rear->next = newnode;
        rear = newnode;
    }

    // Delete element from front
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is Underflow\n";
            return;
        }

        Node* temp = front;

        cout << temp->data << " is deleted\n";

        front = front->next;

        // If queue becomes empty
        if (front == NULL)
        {
            rear = NULL;
        }

        delete temp;
    }

    // Display front element
    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front = " << front->data << endl;
    }

    // Display all elements
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;

        while (temp != NULL)
        {
            cout << temp->data;

            if (temp->next != NULL)
            {
                cout << " -> ";
            }

            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.display();

    q.peek();

    q.dequeue();

    cout << "After Dequeue: ";
    q.display();

    q.peek();

    return 0;
}