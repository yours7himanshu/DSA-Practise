#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid= start + (end-start)/2;
int ans = -1;

while(start<=end){

    if(arr[mid]==key){
        ans = mid;
        end = mid-1;
    }
   else if (arr[mid]<key){
    start=mid+1;
    }
    else{
        end = end -1;
    }
    mid = start+(end-start)/2;
}
return ans;

}

int lastOccurence(int arr[],int size,int key){

    int start=0;
    int ans = -1;
    int end = size -1;
    int mid= start +(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
      ans = mid;
      start = mid+1;
        }

        else if (arr[mid]<key){
       start = mid+1;
        }

        else{
            end = end-1;
        }

        mid = start + (end - start)/2;
    }
return ans ;

}


int main(){

    int key;
    cout<<"Enter the key that you wantend to search in an array"<<endl;

   cin>>key;
   int arr[7]={1,3,4,4,4,5,7};

   int ans = firstOccurence(arr,7,key);
   int ans1 = lastOccurence(arr,7,key);

   cout<<"The first Occurence will be :"<<ans<<endl;
   cout<<"The last Occurence will be :"<<ans1<<endl;


}