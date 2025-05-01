#include<iostream>
using namespace std;

// creating data type for our linked list
class Node {

    public:
           int data;
           Node * next;

           Node ( int val){
            data = val;
            next = NULL;
           }
};

// we are accepting the node as a parameter so we have wrote Node * a ;
// check it very carefully

// funtion for printing the size of the linked list
void size (Node * head){

    Node * temp = head ;
    int n = 0;
    while ( temp!=0){
        n++;
        temp = temp->next;
    }

    cout<< n;
}

int main()
{

    // creating nodes 
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node (30);
    Node * d = new Node(40);

    // at this point only nodes has been created not a linked


    // now we are linking the address of other nodes so that it can become linked list

    a->next = b;
    b->next = c;
    c->next = d;

// calling function size
    size(a);



}