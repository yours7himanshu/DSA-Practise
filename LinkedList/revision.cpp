#include<iostream>
using namespace std;

// Important points 
// (*ptr).name = ptr->name
// this is the same thing

// user defined datatype
class Student {
    public:
        int rno;
        string name;
        float marks;

        // we had made constructor the shortcut
        Student(string n,int r,float m){
          name = n;
          rno = r;
          marks = m;
        }
};

// this also gives the same output because its a pass by value
// agar & nhi lagunga to vaps ek block bn jayega usme value store hogi na ki value chnage hogi because pass by value h
void Change (Student &objStudent){
objStudent.name = "hello how are you";
}


int main(){
    // short cut for constructor
 Student objStudent("himanshu dinkar",87887,98.8);

//  also written like this too

Student *s = new Student("Raghav",77,88.9);

s->name = "Jute baj ke chappal minute";
cout<<s->name<<endl;

 Change(objStudent);

// now changing the values using pointer 
cout<<objStudent.name<<endl;

Student *ptr = &objStudent;
(*ptr).name = "Pagal hu mai thoda sa kya kru";

ptr->rno = 949499;

 cout<<objStudent.name<<endl;
//  short cut 
cout<<objStudent.marks<<endl;
}