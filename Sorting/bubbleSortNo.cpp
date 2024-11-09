#include<iostream>
using namespace std;

int main(){
    int arr[7]={78,56,82,12,45,3,9};

    // this loop is for number of rounds that should execute in a bubble sort
    for(int i = 1;i<7;i++){

// this round loop is for comparing 
for(int j=0;j<7-i;j++){

    // now for checking each element
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
}
    }

    // now for printing the sorted array;
    // loop for printing the sorted array
    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}