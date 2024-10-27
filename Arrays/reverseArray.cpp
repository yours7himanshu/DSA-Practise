#include<iostream>
using namespace std;

void reverseOrder(int arr[],int size){
for(int i = size-1;i>=0;i--){
    cout<<arr[i]<<" ";
}
return;
}


int main(){
int arr[7]={1,2,3,4,5,6,7};

reverseOrder(arr,7);



}