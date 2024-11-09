#include<iostream>
using namespace std;

int main(){
    int num = 400;
    int *ptr = &num;

    cout<<"Address of the number is :"<<ptr<<endl;
    cout<<"Value of the number is :"<<*ptr<<endl;


    cout<<"size of a pointer is :"<<sizeof(ptr)<<endl;

    // It basically stores the size of an element type which is present on that pointer
    cout<<"size of a pointer in this way :"<<sizeof(*ptr)<<endl;

}