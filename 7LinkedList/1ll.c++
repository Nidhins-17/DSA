// Linked List
// can grow or shrink in run-time
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // constructor
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertBeg(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertEnd(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(Node* &head,Node* &tail,int pos,int data)
{
    // inserting at first
    if(pos == 1)
    {
        insertBeg(head,data);
        return;
    }

    Node *temp = new Node(data);
    Node *pres = head;

    // inserting at last
    if(temp->next == NULL)
    {
        insertEnd(tail,data);
        return;
    }

    // inserting at middle
    for(int i=1;i<pos-1;i++)
    {
        pres = pres->next;
    }
    temp->next = pres->next;
    pres->next = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    cout<<"Enter the first node data :";
    int data;
    cin>>data;
    Node *node1 = new Node(data);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);

    // insertBeg(head, 14);
    // print(head);

    // insertBeg(head, 15);
    // print(head);

    int choice,value,pos;
    cout << "1.insertBeg   2.insertEnd  3.print\n";
    cin >> choice;
    do
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value :";
            cin >> value;
            insertBeg(head, value);
            break;
        case 2:
            cout << "Enter the valueee :";
            cin >> value;
            insertEnd(tail, value);
            break;
        case 3 :
            print(head);
            break;
        case 4:
            cout<<"Enter the postion :";
            cin>>pos;
            cout << "Enter the value :";
            cin >> value;
            insertAtPos(head,tail,pos, value);
            break;
        }
        cout<<"Enter your choice :";
        cin>>choice;
    }while(choice);
}
