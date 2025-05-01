#include <iostream>
using namespace std;

// we are just creating the class so that we can define our linked list data types
class Node { 
    public:
           int data;
        //    we have to create the pointer of Node data type so that the compiler know that the address which is stored in the next belongs to that particular object 
        // that's why we can able to access a->next example
           Node * next;
           Node (int  val){

            data = val;
            next = NULL;

           }

 
};


int main ()
{

    // creating independent nodes now

    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c =  new  Node(40);
    Node * d = new Node( 50);

    // at this points independent nodes have been created having address NULL at the end of it

    // now we have to link these nodes together so that they can become linked list 


    a->next = b;
    b->next = c;
    c->next = d;

    // linked list are created at this point 

    // now we have to traverse it

    // for travesing we create a another pointer temp

    Node * temp = a;

    while ( temp != NULL){
        cout << temp->data << "  ";
        temp = temp->next;
    }


    // linked list traversed successfully
}