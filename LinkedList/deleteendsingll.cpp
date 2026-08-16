#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head=NULL;
void insertbegin(int val)
{
Node* newnode=new Node();
newnode->data=val;
newnode->next=head;
head=newnode;
}
void insertend(int val)
{
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void deleteend()
{
    if(head==NULL)
    {
        delete head;
    head=NULL;
    return;
}
    if(head->next==NULL)
    {
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    display();
    cout<<endl;
    insertend(200);
    display();
    cout<<endl;
    deleteend();
    display();
    cout<<endl;
}
