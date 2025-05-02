#include<iostream>
using namespace std;

// User defined data type

class Node {

    public:
    int data;
    Node * next;
    Node(int val){

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

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // function for inserting the linkedlist at the end
    void insertAtEnd(int val){
        Node * temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size ++;
    }

    // function for inserting linked list at the beginning

    void insertAtBeggining(int val){

        Node * temp = new Node(val);
        if(size == 0 ) head = tail = temp;
        else{

            temp->next = head;
            head = temp;

        }

        size++;

    }

    // for inserting at any index

    void InsertAnyIndex(int index, int val){

        if(index < 0 || index > size){
            cout<< " Invalid index to insert it"<< endl;
        }
        else if(index == 0) insertAtBeggining(val);
        else if (index == size) insertAtEnd(val);

        else {
            // just create a new node for inserting it
            Node * t = new Node(val);

            // create a new temp as a variable pointer so that we can able to traverse it
            Node * temp = head;

            for ( int i =0 ;i<index-1;i++){
                temp = temp->next;
            }

            // logic for insertng at any index
            t->next = temp->next;
            temp->next = t;
            size++;
        }

    }

    void display (){

        Node * temp = head;
        while ( temp != NULL){

            cout << temp->data<< " ";
            temp = temp->next;

        }
        cout<<endl;

    };


};


int main(){

    LinkedList ll ;

    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.insertAtEnd(80);


    ll.display();


    ll.insertAtBeggining(90);

    ll.InsertAnyIndex(5,77);

    ll.display();
    cout<<ll.size<<endl;

}