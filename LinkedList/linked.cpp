#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        this->next = NULL;
    }
};

int main()
{

    // this is the small way to make linked list newbie way
    //   Node a ;
    //   a.data = 10;

    //   Node b;
    //   b.data = 59;

    //   Node c;
    //   c.data = 90;

    //   Node d ;
    //   d.data = 1000;

    //   a.next = &b;
    //   b.next = &c;
    //   c.next = &d;
    //   d.next = NULL;

    // bit good way
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // printing linked list  using a for loop
    Node temp = a;
// ye while loop se kiya
    while(1){
        cout<<temp.data << " ";
        // agr ye statement nhi likhenge fir v chlega but loop infinite time chlega
        if(temp.next == NULL)break;
        temp = *(temp.next);
    }
    
    // now by doing for loop
    cout<<"\n";
    for (Node *temp = &a ; temp!=NULL; temp = temp->next){
        cout<< temp->data<< " ";
    }

}