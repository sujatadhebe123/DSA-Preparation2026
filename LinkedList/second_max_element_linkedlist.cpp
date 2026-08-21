#include<iostream>
#include <climits>
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
int sl(Node* head)
{
    int max=INT_MIN;
    int second=INT_MIN;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data>max)
        {
            second=max;
            max=temp->data;
        }
        else if(temp->data > second && temp->data!=max)
        {
            second=temp->data;
        }
        temp=temp->next;
    }
    return second;
    
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
    Node* head=new Node(10);
    head->next=new Node(40);
    head->next->next=new Node(30);
    head->next->next->next=new Node(80);
     int result=sl(head);
     cout<<endl;
    display(head);
    cout<<endl;
    cout<<"second largest element in linkedlist"<<result<<endl;
}