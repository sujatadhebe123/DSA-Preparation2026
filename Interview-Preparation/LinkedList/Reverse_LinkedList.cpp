
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }

    void display(Node* head) {
        while(head != NULL) {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
    }

    Node* r1(Node* head) {
        Node* prev = NULL;
        Node* current = head;

        while(current != NULL) {
            Node* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head->display(head);

    head = head->r1(head);

    cout << "Reversed list is:" << endl;
    head->display(head);

    return 0;
}
