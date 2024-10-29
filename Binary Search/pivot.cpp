#include<iostream>
using namespace std;

int getPivot(int arr[],int size){

    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return end;
    
}

int main(){

    int arr[5]={1,3,4,4,5};
    cout<<"Pivot is :"<<getPivot(arr,5)<<endl;

}