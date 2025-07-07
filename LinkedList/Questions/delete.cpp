// deleting a linnked list



#include<iostream>
using namespace std;

// creating user defined data types
class Node {
    public:
    int data;
    Node * next;
    Node( int val){
        data = val;
        next = NULL;
    }
};

// user defined data structure

class LinkedList {
    public:
    Node * head;
    Node * tail;

    int size ;
    LinkedList()
    {
    
        head = tail = NULL;
        size = 0;
    }
// creating function for adding nodes at the begining
    void insertAtHead (int val){

        Node * temp = new Node(val);

        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        } 
        size ++;

    }

    // insert at the tail of a linkedlist
    void insertAtTail (int val ){

        Node * temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;

            // without using tail method but iska ek jhamela ye h ki time completiy O(n) hojyegi jo ki sahi baat nhi h
            // Node * traverse = head;
            // while(traverse->next!=NULL){
            //     traverse = traverse->next;
            // }
            // traverse->next =  temp;
        }
        size ++;

    }

    // inset at the any index of the linkedlist 

    void insertAtIndex (int index, int val){

        if(index < 0 || index >size){
            cout<< "invalid index by the user"<< endl;
        }
        else if (index == 0 ) insertAtHead(val);
        else if ( index == size) insertAtTail(val);
        else {

            Node * temp = new Node(val);
            // now another node for traversing 

            Node * traverse = head;

            for (int i = 0;i<index-1;i++){
                traverse = traverse->next;
            }

           temp->next = traverse->next;
           traverse->next = temp;
           size ++;

        }

    }

    // now for deleting it 
    // function for deleting at head
    

    void deleteAtHead( ){
        if(size == 0){
            cout<< "nothing to delete"<<endl;
        }
        else if(size == 1) head = tail = NULL;
        else {
            head = head->next;
        }

        size --;
    }

    // function for deleting tail
// logic for this 
     void deleteAtTail(){
        if(size == 0){
            cout<< "nothing to delete"<<endl;
        }
        else if(size == 1) head = tail = NULL;
        else {
            Node * traverse = head;
            while (traverse->next != tail){
                traverse  = traverse->next;
            }

            traverse->next = NULL;
            tail = traverse;
            
        }
        size--;
     }

    //  function for deleting at particular address
    void deleteAtIndex(int index){
        if(size == 0 ){
            cout << "nothing to delete the linked list"<<endl;
            return ;

        }
        else if (index < 0 || index >= size ) {
            cout<< "invalid index number ";
            return ;
        }
        else if ( index == 0 ) return  deleteAtHead();
        else if ( index == size - 1) return deleteAtTail();

        else {

            Node * temp  = head;
            for ( int i =0; i<index-1;i++){
                temp = temp->next;
            }

            temp->next = temp->next->next;
        }
        size --;

    }


    // creating a function for displaying it 
    void display ( ){
        Node * temp = head;
        while ( temp != NULL){
            cout<< temp->data<< " ";
            temp = temp->next;

        }
        cout<<endl;
    }
};


int main()
{

    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtTail(20);
    ll.insertAtIndex(1,30);
    ll.display();
    ll.deleteAtIndex(1);
    
    ll.display();

}