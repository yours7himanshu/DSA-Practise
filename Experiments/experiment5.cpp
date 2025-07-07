// print from N to 1


#include<iostream>
using namespace std;

void reverseCouting(int i , int  n){

    if(n < i ) return;
    else {
        cout << n << " ";
        reverseCouting(i,n-1);
    }

}

int main(){

    cout<< "Enter the number";
    int n;

    cin >> n ;
    reverseCouting(1,n);

}