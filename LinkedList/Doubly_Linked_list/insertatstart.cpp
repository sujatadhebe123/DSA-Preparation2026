#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node* head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }

    void insertBeginning(int value)
    {
        Node* newnode = new Node(value);

        if(head == NULL)
        {
            head = newnode;
            return;
        }

        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

    void displayForward()
    {
        if(head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyLinkedList list;

    int choice;
    int value;

    while(true)
    {
        cout << "\nDoubly Linked List:" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Display Forward" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";

        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter node value you want to insert: ";
                cin >> value;

                list.insertBeginning(value);
                break;

            case 2:
                cout << "Display List:" << endl;
                list.displayForward();
                break;

            case 3:
                return 0;

            default:
                break;
        }
    }
}