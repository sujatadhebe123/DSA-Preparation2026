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
void insertend(int val)
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
void searchelement(int key)
{
    Node *temp=head;
    int pos=1;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"elemnet found at"<<pos<<endl;
            return;
        }
        temp=temp->next;
        pos++;
    }
    cout<<"Not found"<<endl;
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
    insertend(100);
    display();
    cout<<endl;
    searchelement(20);
    display();
    return 0;
}