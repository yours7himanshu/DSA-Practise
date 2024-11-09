#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operatins you are going to perform"<<endl;
    cin>>op;
    switch(op){
        case '+':
         cout<<(a+b)<<endl;
         break;
         
        case '-':
        cout<<"The Answer will be the followring: "<<(a-b)<<endl;
        break;   

         
        case '/':
        cout<<"The Answers will be the following:"<<(a/b)<<endl;
        break;   

         
        case '%':
        cout<<"The Answers will be the following:"<<(a%b)<<endl;
        break;   

        default: 
        cout<<"Please Enter the value Operations"<<endl;
    }
}
