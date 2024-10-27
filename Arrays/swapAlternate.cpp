#include<iostream>
using namespace std;


void swap(int arr[],int size){
    for(int i = 0; i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return;
}

int main(){
    int arr[6]={4,5,1,2,7,8};
    int odd[7]={4,6,7,54,3,9,3};
    swap(arr , 6);
    swap(odd,7);
}

