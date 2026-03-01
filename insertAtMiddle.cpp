#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtMiddle(Node* &head, int index, int val) {

    
    if (index == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    int i = 1;

    
    while (temp != NULL && i < index) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        cout << "Invalid index!" << endl;
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    cout << "Before insertion:\n";
    display(head);

    insertAtMiddle(head, 2, 75);   

    cout << "After insertion:\n";
    display(head);

    return 0;
}
