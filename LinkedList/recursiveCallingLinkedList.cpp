#include<iostream>
using namespace std;

// creating data types for my Nodes using class

class Node {
    public:
           int data;
           Node * next;



// jb ek single node bnegi to is format mai initalise hongi uske ander ki chize
           Node (int val){

            data = val;
            next = NULL;

           }
     
};

// function of printing linked list recursively
void printRecursively(Node * head){
// NO NEED TO MAKE ANOTER VARIABLE TEMP HERE BECAUSE VALUE IS PASSING BY VALUE NOT BY ADDRESS
    if(head == NULL) return ;

    cout<< head->data <<" ";

    printRecursively(head->next);

};


int main(){


    // creating independent nodes 

  
    Node * a = new Node(30);
    Node * b = new Node(40);
    Node * c = new Node(50);
    Node * d = new Node(60);


    // creatig linked list using this
    a->next = b;
    b->next = c;
    c->next = d;


    // function for recursivley calling to print linked list
    printRecursively(a);

}