#include<iostream>
using namespace std;

// User defined data type 

class Node {
    public:
    int data ;
    Node * next;
    Node ( int val){
        data = val;
        next = NULL;
    }
};

// user defined data structure

class LinkedList {
    public:
    Node * head;
    Node * tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;

    }

    // insert posistion at the head means at the beginning of the linkedlist
    void insertAtHead(int val){
        Node * temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size ++;
    }

    // now i am making a function to add a node at the end of the linked list

    void insertAtEnd (int val){

        Node * temp = new Node(val);
        if(size == 0) head = tail = head;
        else {
            tail->next = temp;
            tail = temp;
        }

        size ++;

    }

    // function for inserting it any position 

    void insertAtIndex(int index, int val){
        // we have three cases for this one

        // case 1
        if(index<0 || index>size){
            cout<<"invalid index to insert"<<endl;
        }
        // case 2
        else if( index == 0 ) insertAtHead(val);
        else if (index == size) insertAtEnd(val);
        else {
            // creating the node
            Node * t = new Node(val);

            // make a temprory pointer node so that i can traverse

            Node * temp = head;
            for( int i = 0; i<index-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;

        }
    }

    // function for displaying the linked list
    void display(){
        Node * temp = head;
        while(temp!=NULL){
            cout << temp->data<< " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main ()
{

    // initialistaion of the linkedlist datastructure that i had made above
    LinkedList ll;

    // fucntion calling
    ll.insertAtHead(33);
    ll.insertAtHead(7);
    ll.insertAtHead(39);
    ll.insertAtEnd(77);
    ll.insertAtHead(38);
    ll.insertAtIndex(4,89);

    ll.display();
    cout<<ll.size<<endl;

}