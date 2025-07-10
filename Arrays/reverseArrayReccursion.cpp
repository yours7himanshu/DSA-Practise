// reversing array using recursion method one (drawback have to use lots of variables)

#include<iostream>

using namespace std ;
int arr [ 6] = {7,98,3,9,5,3}; 

void reversingArray (int start , int end){

    // this is the base condition if this start greater then just return 
    if(start>=end) return  ;

   swap(arr[start],arr[end]);
   reversingArray(start+1,end-1);

}

int main (){

    
    reversingArray(0,5);

    // printing that array
       for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

}