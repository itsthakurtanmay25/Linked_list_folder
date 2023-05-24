#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // constructor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void insert_At_head(node*& head, int d) {
    node* new_node = new node(d);
    new_node->next = head;
    head = new_node;
}

void traverse(node * &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}

int main() {
    node* first_ele = new node(5);
    node* head = first_ele;

    insert_At_head(head, 4);
    insert_At_head(head, 3);
    insert_At_head(head, 33);
    insert_At_head(head, 124);
    insert_At_head(head, 67);

    traverse(head);
    return 0;
}
