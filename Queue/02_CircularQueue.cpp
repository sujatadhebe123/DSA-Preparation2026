#include<iostream>
using namespace std;

class CircularQueue
{
private:
    int arr[5];
    int size = 5;
    int front;
    int rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        // Check if queue is full
        if((rear + 1) % size == front)
        {
            cout << "Queue is Overflow\n";
            return;
        }

        // First element
        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;

        cout << value << " is inserted\n";
    }

    void dequeue()
    {
        // Check if queue is empty
        if(front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << arr[front] << " is deleted\n";

        // Only one element
        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue: ";

        int i = front;

        while(true)
        {
            cout << arr[i] << " ";

            if(i == rear)
            {
                break;
            }

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main()
{
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    q.display();

    return 0;
}