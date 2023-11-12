#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int calcSize(Node* node){
    int size=0;
    while(node!=NULL){
        node=node->next;
        size++;
    }
    return size;
}
void deletePos(int pos,Node* *head){
    int size=calcSize(*head);
    if (pos<1 && size<pos){
        cout<<"Not a valid position\n";
    }
    Node* temp= new Node();
    temp=*head;
    Node* previous= new Node();
    if (pos==1){
        *head=temp->next;
        free(temp);
    }
    
    while(--pos){
        previous=temp;
        temp=temp->next;
    }
    previous->next=temp->next;
    free(temp);
}
void display(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<"\n";
}

int main()
{
    Node e={5,NULL};
     Node d={4,&e};
    Node c={3,&d};
    Node b={2,&c};
    Node a={1,&b};
    Node* head=&a;
    display(head);
    deletePos(5,&head);
    display(head);
    return 0;
}