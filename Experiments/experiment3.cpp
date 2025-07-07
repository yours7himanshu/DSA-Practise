#include<iostream>
using namespace std;
int count = 0;

void callingName( string name  ){


    while(count !=5){
        cout<<name<<endl;
        count ++;
        callingName(name);
    }

    return;




}

int main (){
    string name = "himanshu dinkar";
    callingName(name);

}