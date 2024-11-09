#include<iostream>
using namespace std;

int main(){
    // int arr[10]={2,3,45,46,72};

    // cout<<"Address of the first element is:"<<arr<<endl;
    // cout<<"Address of first element in another way is:"<<&arr[3]<<endl;
    // cout<<"4th way to print the address is :"<<*arr<<endl;
    // cout<<"Experimenting the other thing  is :"<<*arr+4<<endl;
    // cout<<"Value present in this way by using this method:"<<*(arr+1)<<endl;
    // int i =4;
    // cout<<i[arr]<<endl;
    // 
    // int a[20]={1,5,6,7,7};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // int *ptr= &a[0];
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // int arr[10];
    // int *ptr = &arr[0];
    // ptr = ptr+1;
    // cout<<"Address of the first index of the array is:"<<arr<<endl;
    // cout<<" Address using the pointer is "<<ptr<<endl;

    char ch[5]="abcd";
    char *chr = &ch[0];
    cout<<"Printing using the array:"<<ch<<endl;
    cout<<"Printing by using pointer:"<<chr<<endl;
}