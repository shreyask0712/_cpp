#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int calcSize(Node* node){
    int size=0;
    while (node!=NULL){
        node=node->next;
        size++;
    }
    return size;
}
void display(Node * node) {

    //as linked list will end when Node is Null
    while (node != NULL) {
        cout << node -> data << " ";
        node = node -> next;
    }
    cout << endl;
}
void delete1(Node* *head,int delVal){
   Node* temp=new Node();
   temp=*head;
   Node* previous= new Node();
   //if the element to be deleted is the only element     
   if (temp->next==NULL){
    *head=NULL;
    free(temp);
   }
   //if the element to be deleted is the first element
   if (temp->next!=NULL && temp->data==delVal){
    *head=temp->next;
    free(temp);
   }
   //if the element to be deleted isn't in the list
   while (temp!=NULL && temp->data!=delVal){
   previous=temp;
   temp=temp->next;
   }
   if (temp==NULL){
    cout<<"value not found !!\n";
    return;
   }
   previous->next=temp->next;
   free(temp);
}
int main()
{
    Node e={5,NULL};
    Node d={4,&e};
    Node c={3,&d};
    Node b={2,&c};
    Node a={1,&b};
    Node *head=&a;
    display(head);
    delete1(&head,5);
    display(head);
    return 0;
}