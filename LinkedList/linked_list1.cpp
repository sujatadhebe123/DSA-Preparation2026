#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class List
{
    Node *head;
    Node *tail;
    public:
    List()
    {
        head=tail=NULL;
    }
    void push_front(int value)
    {
        Node *newNode=new Node(value);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

    }
    void printll()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};
int main()
{
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.printll();

    return 0;
}