#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;

    //Constructor
    node(int d){
        this->data = d;//here i am using this as a good practice only, without this operator my work fine but this operator is only for good practice;
        this->next = NULL;
    }
};
void insert_At_tail(node *&tail,int d){

    //step 1: Creating a new Node
    node * new_node = new node(d);
    
    //Step 2 : tod fod kardo 
    tail->next = new_node;
    new_node->next = NULL;
    
    //step 3 : Update kardo tail ko;
    tail = new_node;
}

void traverse(node * &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node * first_ele = new node(11);
    node * tail = first_ele;
    node * head = first_ele;
    insert_At_tail(tail,12);
    insert_At_tail(tail,13);
    insert_At_tail(tail,14);
    insert_At_tail(tail,15);
    insert_At_tail(tail,16);

    traverse(head);
    return 0;
}