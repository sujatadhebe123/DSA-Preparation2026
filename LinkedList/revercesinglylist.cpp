#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
void display(Node*head)
{
    Node* head=head;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
Node *rl(Node* head)
{
    Node* prev=NULL;
    Node* current=head;
    while(current!=NULL)
    {
        Node* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next=new Node(40);
    
    cout<<"original list is="<<endl;
    display(head);
    head=rl(head);
    cout<<"reverse list "<<endl;
    display(head);
}
