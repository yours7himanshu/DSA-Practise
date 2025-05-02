#include <iostream>
using namespace std;

// user defined data type

class Node {
    public:
    int  data ;
    Node * next ;
    Node(int val){
        data = val;
        next = NULL;
    }
};

// user defined data structure
class LinkedList{
    public:
    Node * head;
    Node * tail;

    int size ;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // now first we are going to create some nodes 
    // writing function for adding at begging 

    void insertAtHead ( int val ){

        // creating new node
        Node * temp = new Node(val);
        // case one to check
        if(size == 0 ) head = tail = temp;
        // case 2 to check
        else {
            temp->next = head;
            head = temp;
        }
        size ++;

    }

    // fucntion for adding node at the end

    void insertAtEnd ( int val){
        Node * temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size ++;
    }


    // adding node at a particular index 
    void insertAtIndex( int index, int val){
        if( index < 0 || index > size){
            cout<< " invalid index"<< endl;
        }
        else if (index == 0) insertAtHead(val);
        else if (index == size) insertAtEnd(val);
        else {
            Node * p = new Node(val);
            Node * temp = head ;

            for ( int i =0;i<index-1;i++){
                temp = temp->next;
            }

            p->next = temp->next;
            temp->next = p;
            size++;
        }
    }

    // writing function for deleting it at the head

    void deleteAtHead (){

        // case one to check
        if(size == 0)
        {
            cout<< "No list found to delete"<<endl;
            return ;
        }
        // case 2 to check
        else if (size==1) {
            head = tail = NULL;
            size --;
            return ;
        }

        // case 3 to check
        else {
            head = head->next;
            size --;
            return ;
        }
    }


    // creating a function to delte at tail

    void deleteAtTail() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }

        if (size == 1) {
            // Only one node in the list
            delete head;
            head = tail = NULL;
        } else {
            // Traverse to the second-last node
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }

            delete tail;     // delete last node
            tail = temp;     // update tail to second-last node
            tail->next = NULL;
        }
        size--; // reduce size
    }


    // function bana raha hu index ke base pe nodes ko delete krne ke lie
    void deleteAtIndex (int index){

        if(index < 0 || index >= size){
            cout<< "invalid index to delete "<<endl;
            return;
        }
        else if(index == 0) deleteAtHead() ;
        else if(index == size-1) deleteAtTail();
        else {

            // sbse pehle ek node bana lete h jisse traverse kr paye
            Node * temp = head;
            for ( int i =0 ;i<index-1;i++){
                temp = temp->next;
            }

            temp->next = temp->next->next;
            size--;
        }


    }
    
    void display ( ){
        Node * temp = head;

        while ( temp!=NULL){
            cout<< temp->data<< ' ';
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main (){

    LinkedList ll;
    ll.insertAtHead(20);
    ll.insertAtEnd(30);
      // fucntion calling
      ll.insertAtHead(33);
      ll.insertAtHead(7);
      ll.insertAtHead(39);
      ll.insertAtEnd(77);
      ll.insertAtHead(38);
      ll.insertAtIndex(4,89);
      ll.display();
      cout<<ll.size<<endl;

    //   function calling to delete at the head positon of a linked list
      ll.deleteAtHead();
      ll.display();
   
      cout<< " printing the size of a linked list again "<<endl;
      cout<<ll.size<<endl;

    //   ab yaha check kruga ki node delete hota h tail se ya nhi
    ll.deleteAtTail();
    cout<< "displaying it after deleting the last node or we can say that tail node "<<endl;
    ll.display();

    cout<<"Now printing the size of the linkedlist after deleting the tail node"<< endl;
    cout<<ll.size<<endl;



    ll.deleteAtIndex(4);
    cout<< "displaying after deleting at 4th position :"<<endl;
    ll.display();
    cout<<ll.size<<endl;

  
  

}