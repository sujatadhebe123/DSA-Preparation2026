#include<iostream>
using namespace std;
class Node{
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
void deletemiddle(int pos)
{
    Node*temp=head;
   for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=del->next;
    delete del;

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
    insertbegin(40);
    display();
    cout<<endl;
    deletemiddle(3);
    display();
    cout<<endl;
}