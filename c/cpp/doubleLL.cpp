#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node* prev;
}
class LinkedList{
    private:
    Node *head;
    public:
    LinkedList()
    {
        prev=head=NULL;
    }
    void calcSize();
    void Insertstart(int data);
    void Insertlast(int data);
    void Insertpos(int pos, int data, int size);
}
void Linkedlist::calcSize()
{
    int size=0;
    Node* newNode= new Node;
    newNode=head;
    while (node!=NULL)
    {
        size++;
        node=node->next;
    }
    return size;
}
void Linkedlist::Insertstart(int data)
{
    Node* newNode = new Node();
    newNode->next=NULL;
    newNode->prev=NULL;
    if (head==NULL)
    {
        newNode=head;
        newNode->next=NULL;
        newNode->prev=NULL;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void Linkedlist::Insertlast(int data)
{
    Node* newNode= new Node();
    newNode->next=NULL;
    newNode->prev=NULL;
    Node* last=new Node();
    last=head;
    
}

int main()
{
    
    return 0;
}