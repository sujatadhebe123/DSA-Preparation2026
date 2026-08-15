#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head=NULL;
void insertBegin(int val)
{
    Node *newnode=new Node();
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void insertEnd(int val)
{
    Node *newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    insertBegin(10);
    insertBegin(20);
    insertBegin(30);
    display();
    cout<<endl;
    insertEnd(80);
    insertEnd(90);
    display();
    return 0;
}