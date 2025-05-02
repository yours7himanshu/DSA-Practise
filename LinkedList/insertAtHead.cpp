#include<iostream>
using namespace std;

// user defined data type

class Node {
    public:
    int data;
    Node * next;
    Node (int val){

        data = val;
        next = NULL;

    }


};

class LinkedList {
    public:
    Node * head;
    Node * tail;
    int size ;
    
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }


    void insertAtHead(int val){

        Node * temp = new Node(val);

        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
      size ++;
    }

    void display(){

        Node * temp = head;
        while(temp!=0){
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
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.display();
    ll.insertAtHead(40);
    ll.insertAtHead(50);

    ll.display();



}