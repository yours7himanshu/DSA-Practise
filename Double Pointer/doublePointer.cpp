#include <iostream>
using namespace std;

void update(int **p)

int main(){
    
int a = 13;
    // is case mai hame pata h ki kis type ka pointer h 
    int *ptr = &a;

    int **ptr2 = &ptr;
    cout<< "value of the double pointer is :"<<**(ptr2)<<endl;
    cout<<"value of the normal pointer is :"<<*(ptr)<<endl;

    cout<<"normal printing the value of a :"<<a<<endl;

    // now number of methods to print the value of normal ptr
// by using these methods we can print the value of the pointers too 
    cout<<"value of the pointer ptr:"<<&a<<endl;
    cout<<"value which is present in the pointer ptr :"<<ptr<<endl;
    cout<<"value which is present in the pointer ptr usig double pointer"<<*(ptr2)<<endl;


}