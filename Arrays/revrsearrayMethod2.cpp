#include<iostream>
using namespace std;


// this one is the best method for reversing array using recursion
void reversingArray(int i , int arr[], int n){

    // starting with base condition

    if(i>=n/2) return ;


    // logic for reversing the array using reccursion 
    swap(arr[i],arr[n-i-1]);

    // recursion calling it 
    reversingArray(i+1, arr, n);

}


// main function for this one 
int main (){

    cout <<"Enter the size of an array"<< endl;

    int n ;
    cin >> n;

    int arr[n];

   cout << "Enter input in an array"<< endl;

    for(int i =0 ;i<n;i++) cin >> arr[i];

    reversingArray(0,arr,n);

    cout<< " Reversed array is : "<< " "<< endl;

    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";

    return 0;



}