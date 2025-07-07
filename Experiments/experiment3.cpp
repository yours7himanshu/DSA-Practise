#include<iostream>
using namespace std;

void printName( int i , int times  ){
    if(i>times) return;
    else{
        cout<<"Himanshu Dinkar"<<endl;
        printName(i+1,times);
    }


}

int main (){
    int times;
    cout<< "Enter how many times the name should be printed";
    cin>>times;
    printName(1, times);
}