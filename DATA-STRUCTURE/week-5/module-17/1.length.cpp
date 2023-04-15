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

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
void insertAtHead(Node *&head, int val)
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
    cout<<endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
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

    cout << "Linked list: ";
    display(head);
    cout << "Length of the list: " << countLength(head) << endl;

    return 0;
}
