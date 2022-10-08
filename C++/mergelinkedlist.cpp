/*
Name : Rounak Ghosh
Username : Rounak-Ghosh
About : 4th year undergrad student at GCETTB
*/

#include<iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while (n != NULL) 
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void insertAtEnd(Node* &head, int val)
{
    Node* n = new Node();
    n -> data = val;
    if(head == NULL)
    {
        head = n;
        return;
    }    
    Node* last = head;
    while(last -> next != NULL)
        last = last->next;
    last -> next = n;
}

Node* mergeList(Node* &head1, Node* &head2)
{
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummyNode = new Node();
    Node* p3 = dummyNode;

    while(p1 != NULL && p2 != NULL)
    {
        if(p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while(p1!=NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while(p2!=NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
}

Node* mergeRecursive(Node* &head1, Node* &head2)
{
    if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;
    
    Node* result;
    if(head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main()
{
    Node* head1 = new Node();
    Node* head2 = new Node();

    head1 = NULL;
    head2 = NULL;

    insertAtEnd(head1, 1);
    insertAtEnd(head1, 4);
    insertAtEnd(head1, 5);
    insertAtEnd(head1, 7);
    printList(head1);

    insertAtEnd(head2, 2);
    insertAtEnd(head2, 3);
    insertAtEnd(head2, 6);
    printList(head2);

    //Node* newhead = mergeList(head1, head2);
    //printList(newhead);

    Node* newhd = mergeRecursive(head1, head2);
    printList(newhd);

    return 0;
}