#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
}*stnode;

void make(int n);
void printMiddle(struct Node * stnode);
void print();


int main()
{
    int n,num;
        
    cout<<"Enter the number of nodes: ";
    cin>>n;
    make(n);
    cout<<"\nLinked list data: \n";        
    print();
    printMiddle(stnode);
   
    return 0;
}

void make(int n){
    int num,i;
    struct Node* frntnode, *temp;
    stnode=(struct Node*)malloc(sizeof(struct Node));
    if (stnode==NULL){
        cout<<"Memory can't be allocated\n";
    }
    else{
        cout<<"Enter data for Node 1\n";
        cin>>num;
        stnode->data=num;
        stnode->next=NULL;
        temp=stnode;
        for (i=2;i<=n;i++){
            frntnode=(struct Node*)malloc(sizeof(struct Node));
    if (frntnode==NULL){
        cout<<"Memory can't be allocated\n";
    }
    else {
            cout<<"Enter data for Node "<<i<<"\n";
            cin>>num;
            frntnode->data=num;
            frntnode->next=NULL;
            temp->next=frntnode;
            temp=temp->next;
    }
        }
    }
}
void print(){
    struct Node* temp;
    if (temp==NULL){
        cout<<"No elements to display\n";
    }
    else{
        temp=stnode;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<"\n";
}
void printMiddle(struct Node* stnode){
    struct Node* single_ptr=stnode;
    struct Node* twice_ptr=stnode;
    if (stnode!=NULL){
        while (twice_ptr!=NULL && twice_ptr->next!=NULL){
            single_ptr=single_ptr->next;
            twice_ptr=twice_ptr->next->next;
        }
        cout<<"middle element is "<<single_ptr->data;
    }

}