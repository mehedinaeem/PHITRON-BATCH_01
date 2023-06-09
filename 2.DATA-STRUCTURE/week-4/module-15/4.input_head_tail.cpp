#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return 0;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
insertAtHead(Node *&head, int val)
{
    // s1: new node creation
    Node *newNode = new Node(val);
    // s2: update of new node next
    newNode->Next = head;
    // s3: update of head
    head = newNode;
}
void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
        {
            cout << " <-> ";
        }
        n = n->Next;
        // cout << endl<<endl;
    }
}

int main()
{
    Node *head = NULL;
    int n;
    // choice 1: insertion at head
    cout << "choice 1: insertion at head:" << endl;
    // choice 2: insertion at tail
    cout << "choice 2: insertion at tail:" << endl;
    cout << "choice 3: Exit" << endl;

    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value:";
        cin >> n;
        if (choice == 1)
            insertAtHead(head, n);
        else if (choice == 2)
            insertAtTail(head, n);
        cout << "Next choice:";
        cin >> choice;
    }

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // Node *second = new Node();

    // head->value = 10;
    // second->value = 50;

    // head->Next = second;
    // second->Next = NULL;

    display(head);

    return 0;
}
