#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){

    for(int i = 1;i<size;i++){
        for(int j =0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[7]={89,67,3,5,75,6,9};

   bubbleSort(arr,7);
   printArray(arr,7);

   return 0;

}