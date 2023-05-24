#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int d){   //constructor
        this->data = d;
        this->next = NULL;
    }
};
int main(){
    
    node * first_node = new node(5);
    cout<<first_node->data<<endl;
    cout<<first_node->next<<endl;
    return 0;
}