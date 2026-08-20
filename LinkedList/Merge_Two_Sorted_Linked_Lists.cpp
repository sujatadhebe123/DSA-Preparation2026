#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
Node* mergeList(Node* head1,Node*head2)
{
    Node* dummy=new Node(0);
    Node* tail=dummy;
    while(head1!=NULL &&head2!=NULL)
    {
        if(head1->data<= head2->data)
        {
            tail->next=head1;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            head2=head2->next;
        }
        tail=tail->next;
    }
    if(head1!=NULL)
    {
        tail->next=head1;
    }
    else{
        tail->next=head2;
    }
    return dummy->next;
}
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";

}
int main()
{
    Node* head1=new Node(10);
    head1->next=new Node(30);
    head1->next->next=new Node(60);
    cout<<"List1:"<<endl;
    display(head1);
    cout<<endl;
    Node* head2=new Node(20);
    head2->next=new Node(40);
    head2->next->next=new Node(50);
    cout<<"List2:"<<endl;
    display(head2);
    cout<<endl;
    Node *result=mergeList(head1,head2);
    display(result);

}