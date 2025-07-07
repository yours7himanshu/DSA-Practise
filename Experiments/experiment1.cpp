#include<iostream>
using namespace std;

// infinte recursion demo
int hello(int val){
    cout<<val<<endl;
    hello(1);
}


int main (){
    hello(1);
}