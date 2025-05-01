#include<iostream>
using namespace std;

class Node {
    public:
           int data;
           Node * next;

           Node ( int val){
            data = val;
            next = NULL;
           }
};

// function for traversing the linked list
void display(Node *head){

    Node * temp = head;

    while(temp!=NULL){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
   
    cout<< endl;
};

int main (){

    Node * a = new Node(30);
    Node * b = new Node(40);
    Node * c = new Node(50);
    Node * d = new Node(60);

    a->next = b;
    b->next = c;
    c->next = d;


    // ye chiz as a value jaa rahi h matlb iske address se frk nii pdega means hame funtion mai chahe to jarurat nhi h temp variable banane ki direct conditionn laga do chahe ekdam sahi kam krege 

    // upr jo line likhi h use yaad rakhna
    
    
    display(a);
}
