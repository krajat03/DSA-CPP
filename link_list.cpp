#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *pre;
};

struct Node *createNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    cout << "Enter the data : ";
    cin >> newNode->data;
    newNode->pre = NULL;
    newNode->next = NULL;
    return newNode;
}; 
void createDoublyLinkedList(struct Node **start)
{
    struct Node *ptr = NULL;
    int n;
    cout << "Enter the size of Doubly linked list: ";
    cin >> n;

    cout << endl
         << "Create a Doubly linklist :- " << endl;
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = createNode();
        if (i == 0)
        {
            *start = newNode;
            ptr = *start;
        }
        else
        {
            ptr->next = newNode;
            newNode->pre = ptr;
            ptr = newNode;
        }
    }
}
void printAddress(struct Node *ptr)
{
    cout << "start = " << ptr << endl;
    cout << "Print a address of Doubly linked list: ";
    while (ptr != NULL)
    {
        cout << "|" << ptr << "|" << "<-->";
        ptr = ptr->next;
    }
}

void print(struct Node *ptr)
{
    struct Node *ptr1 = NULL;
    ptr1 = ptr;
    printAddress(ptr1);
    cout << "Display Doubly linked list: " << endl;
    while (ptr1 != NULL)
    {
        cout << "|" << ptr1->pre << " | ";
        cout << "|" << ptr1->data << " | ";
        cout << "|" << ptr1->pre << " | ";
        cout << "|" << ptr1->data << " | ";
        cout << "|" << ptr1->next << " | ";
    }
}
int main()
{
    struct Node *start = NULL;
    createDoublyLinkedList(&start);
    cout << "Start = " << start;
    print(start);
    return 0;
}