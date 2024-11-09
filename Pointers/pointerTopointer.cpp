#include<iostream>
using namespace std;

int main(){

    int num=100;
    int *p=&num;
    int *q = p;
    

    cout<<"Address of pointer is"<<q<<endl;
    cout<<"Value of pointer is "<<*q<<endl;
}