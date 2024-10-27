#include<iostream>
using namespace std;


// this code has some errors had to debug it personally
int getMinNumber(int a[],int size){

int mini = INT64_MAX;
for(int i =0;i<size;i++){
mini = min(mini,a[i]);
}
    return mini;
}



int getMaxNumber(int a[],int size){
int maximum = INT64_MIN;
for(int i =0;i< size;i++){
 maximum = max(maximum,a[i]);
}
return maximum;
}


int main(){

int size;
cout<<"Enter the size of an array"<<endl;
cin>>size;

int a[100];

int answer1=getMaxNumber(a,size);
int answer2=getMinNumber(a,size);

cout<<"Largest Number is :"<<answer1<<endl;
cout<<"Smallest Number is :"<<answer2<<endl;


return 0;

}