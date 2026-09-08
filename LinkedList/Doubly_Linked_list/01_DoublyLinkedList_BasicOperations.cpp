#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList
{
    private:
    Node* head;
    public:
     DoublyLinkedList()
     {
      head=NULL;
     }
     void insertatstart(int value)
     {
        Node* newnode=new Node(value);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
     }
     void insertend(int value)
     {
         Node* newnode=new Node(value);
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
        newnode->prev=temp;

        
     }
     void deletebegin()
     {
        if(head==NULL)
        {
            return;
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
        head->prev=NULL;
        }
        delete temp;
     }
     void search(int key)
     {
        Node* temp=head;
        int pos=1;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<"Element found at position:"<<pos<<endl;
                return;
            }
            pos++;
            temp=temp->next;
        
        }
        cout<<"Element not found\n";
     }
     //forward display
     void display()
     {
        if(head==NULL)
        {
            cout<<"list is empty\n";
            return;
        }
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
     }
     void display_backward()
     {
        if(head==NULL)
        {
            cout<<"List is Empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->prev;
        }
        cout<<"NULL";
     }
     
};
int main()
{
    DoublyLinkedList list;
    int ch;
    int value;
    cout<<"___DoublyLinkedList___\n";
    
    while(true)
    {
     cout<<"\n1.insert element\n";
     cout<<"\n2.insert at end\n";
     cout<<"\n3.delete from begin\n";
     cout<<"\n4.search an element\n";
    cout<<"5.display_forward\n";
    cout<<"6.display_backward\n";
    cout<<"Eneter choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter value do you want insert\n";
        cin>>value;
        list.insertatstart(value);
        break;
        case 2:
        cout<<"Enter value\n";
        cin>>value;
        list.insertend(value);
        break;
        case 3:
        list.deletebegin();
        break;
        case 4:
        cout << "Enter element to search: ";
        cin >> value;
        list.search(value);
        break;
        case 5:
        list.display();
        break;
        case 6:
        list.display_backward();
        break;
        case 7:
        return 0;
        default:
        break;
    }

    }
}