#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elments in an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
    int  minIndex = i;
    for(int j = i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);
    }

cout<<"Output will be:\n";
    cout<<arr[n];
}