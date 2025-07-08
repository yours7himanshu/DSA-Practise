// adding first n numbers using recursion 

// is vale case mai global variable ka use krke solve kiya hai

#include<iostream>

using namespace std;

int count = 0;

void sumofN(int start , int lastDigit){
    if(start>lastDigit) return;
    else{
        count = count + start;
        sumofN(start+1,lastDigit);
    }

   
}

int main(){

   
    int lastDigit;
    cout<< "Enter the last digit"<<endl;
    cin>>lastDigit;
  
    sumofN(1,lastDigit);
    cout << count <<endl;



}