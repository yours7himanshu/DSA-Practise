#include<iostream>
using namespace std;

// creating datatypes for my node 

class Node {
    public:
    int data;
    Node * next;

    Node (int val){

        data = val;
        next = NULL;

    }
};

// function for reversing a linked list
// recursion is best for reversing a linked list
void reverseLinkedList(Node * head){

    if(head == NULL) return ;
    reverseLinkedList(head->next);
    cout<<head->data<< " ";


}


int main()
{

 // creating independent nodes 

  
 Node * a = new Node(30);
 Node * b = new Node(40);
 Node * c = new Node(50);
 Node * d = new Node(60);


 // creatig linked list using this
 a->next = b;
 b->next = c;
 c->next = d;


 reverseLinkedList(a);

}