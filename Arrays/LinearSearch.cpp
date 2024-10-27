#include<iostream>
using namespace std;


bool linear(int arr[],int size, int key){
for(int i =0;i<size;i++){
    if(arr[i]==key){
        return 1;
        break;
    }
}
return 0;
}


int main(){

    int key;
    cout<<"Enter the key which you wanted to find"<<endl;
    cin>>key;
    int arr[7]={1,2,3,4,4,7,8};

    bool found = linear(arr,7,key);

    if(found){
        cout<<"Element found successfully"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}