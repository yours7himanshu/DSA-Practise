#include<iostream>
using namespace std;

void print(int *p){

    cout<<p<<endl;
}

void update(int *p){
    p = p + 1;
    
}

int main(){
    int value=89;

    int *ptr=&value;
   cout<<"Value before updation: "<<ptr<<endl;
   update(ptr);
   cout<<"Value after updation: "<<ptr<<endl;
}