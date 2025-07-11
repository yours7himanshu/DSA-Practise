// using hashing method to find out how many times a number is apperard on an array

// and its a problem of number hashing

#include<iostream>
using namespace std;


int main (){

    // first we will take the input for the size of an array;

    int n ;
    cout << "Enter the size of an array"<<endl;
    cin >> n;
    
    int arr[n];

    cout <<"input elements in an array"<<endl;
// taking input for the array from the users
    for ( int i = 0 ;i < n ; i ++) {
        cin >> arr[i];
    }


    // now precompute
    int hash[100]={0};
    for ( int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }



    // now taking number of queries like how many times this no will display and all
    int q;
    cout << "Enter how many queries to run"<<endl;
    cin >> q;
    int number;
    while (q>=0){
        cin >> number;
        q--;
        
        cout<<hash[number]<<endl;
    }
// fetchinng 
       




}