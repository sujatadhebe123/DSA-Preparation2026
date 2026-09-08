#include<iostream>
using namespace std;
class Queue
{
    private:
    int arr[5];
    int front;
    int rear;
    public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    void enqueue(int value)
    {
        if(rear==4)
        {
            cout<<"Queue is Overflow\n";
            return;
        }
        if(front==-1)
        {
            front=0;
        }
        rear++;
        arr[rear]=value;
        cout<<value<<"is inserted\n";
    }
    void dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"queue is underflow\n";
            return;
        }
        cout<<arr[front]<<" deleteted\n";
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
    void peek()
    {
        if(front==-1)
        {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<arr[front]<<"=front \n";
    }
    void display()
    {
        if(front==-1)
        {
            cout<<"Queue is empty\n";
            return;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.peek();
    q.display();
}