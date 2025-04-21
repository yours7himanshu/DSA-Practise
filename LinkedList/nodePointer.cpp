#include<iostream>
using namespace std;

class Node {
    public:
          int data;
          Node *next;
          Node(int val){
            data = val;
            next = NULL;
          }
};

int main (){
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    Node * e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = c;
    d->next = c;




}