#include<iostream>
using namespace std;

void update(int arr[],int size){
cout<<"First update function is running currently"<<endl;
    arr[0]=300;
    arr[1]=677;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
cout<<"Returning back to the main function"<<endl;
    return;

}

int main(){
    int arr[3]={88,73,7};

    update(arr,3);
// printing the value here
cout<<"Main function is currently printing  the array"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}