// print numbers using recursion from 1 to N

#include<iostream>
using namespace std;

void counting(int startPoint , int endpoint){

    if(startPoint > endpoint) return;
    else {
        cout << startPoint<< " ";
        counting(startPoint+1,endpoint);
    }

}

int main (){

    cout<<"Enter the value from where you want to print"<<endl;
    int endpoint ;
    cin >>endpoint;

    counting(1,endpoint);

}